--https://leetcode.com/problems/find-followers-count/submissions/1522509710/
SELECT user_id,count(follower_id) AS followers_count FROM Followers 
GROUP BY 1 ORDER BY 1;