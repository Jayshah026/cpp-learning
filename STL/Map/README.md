# Map 

- Here the map data structure it will store value with the key.
- The key will always be unique and sorted.
- The value can be same or different.

### EX : 

- Let's take the "Jay" name as a value.
- Now in the colleage there will be many guys named "Jay" so in order to store them we will use map.
- In the map the key let's take it as an enrollment number.
- Now for everyone the Enrollment will be different but value is same. Here value can be different but key will always remains unique.
- So this is how we use map.

### Declaration : 

map<int, int> mp;

- Here map is the data structure.
- First int represents the data type for the key.
- Second int represents the data type for the value.
- mp : The name of the map.
- Here the data type can be anything for both. 


# Let's understand how map works : 
------------------------------------------------------------------------
- Here we know that map stores value as key and value. But how exactly?
- So let's take one example.
- Here we take an array like this "arr[5] = {11, 423, 11, 232, 11};"
- Now if we want to store this value in the map then we will use "mp[arr[i]]++;" Where mp = map name, arr[i] = array we created.
- Now understand this step by step.
----------------------------------------------------------------------------------------
- First Iteration : arr[i] = arr[0] where 0 is the index. At 0'th index the value is 11.
- After this map become "mp[11]++;". Now map will check is there any key that can store 11 value? if not then it will create a key to store the value.
- Here important thing is.. Key = Array value becomes map key. So here the value is 11 in the array so for storing 11 value map will create a key which will be 11.
- So here KEY = 11. and the Value = 11.
- At the end the output for this will be..

KEY          VAlUE
11             3 
432            1
232            1
------------------------------------------------------------------------------------------------------------------------------------------------------
- So here important thing is..
- Key = Array value.   Ex : if array value is 53464 then to store this value in the map the key will become 53464, it is not starting form the 0 or 1. 
- Value = Frequency.   Frequency = Number of times the number appear in the array.  Ex : if 5 is appearing 3 times in the array then "Value = 3".
- Here in Map the key can be anything like : int, float, char, string, pair etc.. but in the unorderd map key : int, float, char, string but not a pair.

- For more understading there is a code i have write in the MapEx.cpp


