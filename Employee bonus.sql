SELECT e.name, b.bonus
FROM Employee e
JOIN Bonus b ON e.empId = b.empId
WHERE b.bonus < 1000
