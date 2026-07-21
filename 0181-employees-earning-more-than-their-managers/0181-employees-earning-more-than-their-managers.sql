# Write your MySQL query statement below
Select e.name as Employee
From Employee e
Join Employee m on m.id=e.managerId
where e.salary>m.salary