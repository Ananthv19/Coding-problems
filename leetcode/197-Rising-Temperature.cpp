# Write your MySQL query statement below
select x.id 
from Weather x, Weather y
where x.temperature > y.temperature and datediff(x.recordDate, y.recordDate) = 1
