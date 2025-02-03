--https://leetcode.com/problems/average-selling-price/description/?envType=study-plan-v2&envId=top-sql-50
# Write your MySQL query statement below
WITH Revenue AS (
    SELECT
        u.product_id,
        SUM(u.units * p.price) AS total_revenue,
        SUM(u.units) AS total_units
    FROM
        UnitsSold u
    JOIN
        Prices p
    ON
        u.product_id = p.product_id
        AND u.purchase_date BETWEEN p.start_date AND p.end_date
    GROUP BY
        u.product_id
),

AveragePrice AS (
    SELECT
        p.product_id,
        COALESCE(ROUND(CAST(r.total_revenue AS DECIMAL) / r.total_units, 2), 0) AS average_price
    FROM
        (SELECT DISTINCT product_id FROM Prices) p
    LEFT JOIN
        Revenue r
    ON
        p.product_id = r.product_id
)

SELECT
    product_id,
    average_price
FROM
    AveragePrice;