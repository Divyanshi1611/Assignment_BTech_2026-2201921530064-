--https://leetcode.com/problems/employees-earning-more-than-their-managers/submissions/1526651238/
SELECT e.name AS Employee
FROM Employee e
JOIN Employee m ON e.managerId = m.id
WHERE e.salary > m.salary;
