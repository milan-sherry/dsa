Hashing Basics
 count()-> 1 if it exists in the set 0 if not
 size()-> num of elements in set
 insert()-> insets into the set
 empty()-> checks if empty
 erase()-> removes from the set
 clear)-> clears the set the only one with big o of n
 find()-> gives and iterator pointing to the value 

 so how hashing works is that there is a function that takes the value u give and assigns a bucket then after that when u put the value again it doesnt have to go looking for the bucket it simply does the math and finds the bucket it supposed to be,(hash collison) now if there are two values that are assgined the same bucket then it will go through it looking for the value.

 iterators is an object that works like pointer but are different from pointer as they work for hash tables where the data is not stored linearly and has empty gaps.
 begin(), end(), *i gives the value at the iterator
 
 1. Today i learned hashmaps, so for two sum problem instead of going through every number for every number we make a map with the second num as key and the index of it as value by using target minus first num
 So when you can check for the number if the number is already in the map.
217. Check if a number appears twice i used hashmap but hashset is enough as it just checks if it there already in the set if it is then it will say oh then dont add it this is the second time so dont

 
