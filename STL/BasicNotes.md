# #include<bits/stdc++>

- This line will include every library that we need to do coding into the C++ language. Now this is mostly works when we are into the compititive programming challnge
or somthing like that.

# Pairs : 

- So pairs are the container that can store data inside it..

Ex : 

- Declaring the pair :

 pair<int, int> p = {1, 4};

 - Accessing the pairs elements :

cout << first.p << " " << second.p; // first means 1 and the second means 4. 



- Nested pair :

pair<int, pair<int, int>> p = {2 {3, 4}}; 

- Accessing the nested pair elements :

cout << first.p << " " << second.first.p << " " << second.second.p; // First will print 2 then 3 then 4. 
