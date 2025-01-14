# DBMS&SQL

![IMG-20231227-WA0001.jpg](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/IMG-20231227-WA0001.jpg)

![IMG-20231227-WA0009.jpg](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/IMG-20231227-WA0009.jpg)

![IMG-20231227-WA0002.jpg](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/IMG-20231227-WA0002.jpg)

![IMG-20231227-WA0004.jpg](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/IMG-20231227-WA0004.jpg)

![IMG-20231227-WA0008.jpg](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/IMG-20231227-WA0008.jpg)

![IMG-20231227-WA0005.jpg](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/IMG-20231227-WA0005.jpg)

![IMG-20231227-WA0003.jpg](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/IMG-20231227-WA0003.jpg)

![IMG-20231227-WA0006.jpg](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/IMG-20231227-WA0006.jpg)

![IMG-20231227-WA0010.jpg](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/IMG-20231227-WA0010.jpg)

![IMG-20231227-WA0007.jpg](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/IMG-20231227-WA0007.jpg)

![IMG-20231227-WA0012.jpg](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/IMG-20231227-WA0012.jpg)

![IMG-20231227-WA0011.jpg](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/IMG-20231227-WA0011.jpg)

![IMG-20231227-WA0013.jpg](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/IMG-20231227-WA0013.jpg)

![IMG-20231227-WA0016.jpg](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/IMG-20231227-WA0016.jpg)

![IMG-20231227-WA0015.jpg](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/IMG-20231227-WA0015.jpg)

![IMG-20231227-WA0014.jpg](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/IMG-20231227-WA0014.jpg)

A Relational Database Management system (RDBMS) is a database management system that is based on the relational model. It has the following major components: Table, Record/Tuple/Row, Field, and Column/Attribute. Examples of the most popular RDBMS are MYSQL, Oracle, IBM DB2, and Microsoft SQL Server database.

Sharding is a method of splitting and storing a single logical dataset in multiple databases. By distributing the data among multiple machines, a cluster of database systems can store larger dataset and handle additional requests. Sharding is necessary if a dataset is too large to be stored in a single database. Moreover, many sharding strategies allow additional machines to be added. Sharding allows a database cluster to scale along with its data and traffic growth.

CAP theorem: Consistency Availability and Partition tolerance

![Untitled](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/Untitled.png)

# SQL

1. Select distinct name from students : selects distinct names from student table.
2. Select count(distinct name) from students : selects count of distinct names from student table.
3. SELECT * FROM Products

  ORDER BY Price; displays all the data based on ascending order of price;

1. insert into student(id, name, age) values(1, abc, 20), (2, def, 21) 
2. update student set id = 3 where name = ‘abc’;
3. ALTER TABLE *table_name* ADD *column_name datatype*;
4. delete form student where name = ‘abc’;
5. SELECT MIN/Max/Sum/Avg/count(Price) FROM Products;
6. like % and _ 
7. in is used to specify multiple values in where clause:  SELECT * FROM CustomersWHERE Country IN ('Germany', 'France', 'UK');
8. SELECT * FROM Products WHERE Price BETWEEN 10 AND 20;
9. SELECT c.CustomerID AS ID FROM Customers as c;
10. JOINS: 
    1. INNER JOIN : select a, b, c from table1 inner join table2 on table1.key = table2.key;
    2. LEFT JOIN : select a, b, c from table1 left join table2 on table1.key = table2.key;
11. Select count(names), age from customer group by country;
12. CREATE TABLE Orders (

            OrderID int NOT NULL,

       OrderNumber int NOT NULL,

  PersonID int,

  PRIMARY KEY (OrderID),

  FOREIGN KEY (PersonID) REFERENCES Persons(PersonID)

  ON DELETE CASCADE

);

![Untitled](DBMS&SQL%203ccbe01b69d14bc18af9edce405aef87/Untitled%201.png)

1. select first names from table and replace a with A : select replace(firstname, a, A) from table;
2. select concat(firstname, “  “, lastname) as complete name from table;
3. select * from table order by firstname;
4. select * from table order by firstname, department desc;
5. select * from table firstname in (‘satish’, ‘vipul’);
6. select * from table firstname not in (‘satish’, ‘vipul’);
7. select * from table where department like ‘admin%’;
8. select * from table where year(joining data) = 2014 and month(joining data) = February
9. select count(firstname) from table where dept = admin;
10. select department, count(workerid) from table group by (department)) order by count(workerid) ;
11. select * from worker as w inner join title as t on w.workerid = t.worker ref id where worker title = manager;