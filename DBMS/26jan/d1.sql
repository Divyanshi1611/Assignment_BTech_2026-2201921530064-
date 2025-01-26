--https://leetcode.com/problems/managers-with-at-least-5-direct-reports/?envType=study-plan-v2&envId=top-sql-50
SELECT e.name FROM
Employee AS e 
JOIN 
Employee AS m 
ON e.id = m.managerId
GROUP BY m.managerId HAVING count(e.id)>=5;