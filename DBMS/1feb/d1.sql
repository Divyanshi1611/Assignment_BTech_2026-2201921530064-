--https://leetcode.com/problems/second-highest-salary/submissions/1528716168/?envType=problem-list-v2&envId=database
SELECT MAX(salary) AS SecondHighestSalary
FROM Employee
WHERE salary < (SELECT MAX(salary) FROM Employee);
