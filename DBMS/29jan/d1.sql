--https://leetcode.com/problems/customers-who-never-order/submissions/1524623599/
SELECT c.name AS Customers 
FROM Customers c 
LEFT JOIN Orders o ON c.id = o.customerId 
WHERE o.customerId IS NULL;
