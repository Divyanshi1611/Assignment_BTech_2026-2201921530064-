--https://leetcode.com/problems/delete-duplicate-emails/submissions/1525715515/?envType=study-plan-v2&envId=top-sql-50

DELETE p1 FROM Person p1
JOIN Person p2 
ON p1.email = p2.email AND p1.id > p2.id;
