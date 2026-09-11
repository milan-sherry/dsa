Hashing Basics
 count()-> 1 if it exists in the set 0 if not
 size()-> num of elements in set
 insert()-> insets into the set
 empty()-> checks if empty
 erase()-> removes from the set
 clear)-> clears the set the only one with big o of n
 find()-> gives and iterator pointing to the value 
 you can use a vector as the value but not as the vector as map doesn tknow how to hash a vector
erase(it) works for vectors where u go through the list using iterator it then after a certain condition you want to remove the element then use this no need to increment as it automatically goes to the next position.

 So how hashing works is that there is a function that takes the value u give and assigns a bucket then after that when u put the value again it doesnt have to go looking for the bucket it simply does the math and finds the bucket it supposed to be,(hash collison) now if there are two values that are assgined the same bucket then it will go through it looking for the value.

 iterators is an object that works like pointer but are different from pointer as they work for hash tables where the data is not stored linearly and has empty gaps.
 begin(), end(), *i gives the value at the iterator
 
 1. Today i learned hashmaps, so for two sum problem instead of going through every number for every number we make a map with the second num as key and the index of it as value by using target minus first num
 So when you can check for the number if the number is already in the map.

217. Check if a number appears twice i used hashmap but hashset is enough as it just checks if it there already in the set if it is then it will say oh then dont add it this is the second time so dont

242 Anagram basically two words with same letters in different orientation make a hash map to check frequency then go through the second word and if the letter is there decrease the frequency by one if it is not then its not a anagram and return false.

15.This was very hard, use two pointers from either side and a sorted array check duplicates as well this is took me two days basically you sort the whoel thing then you check if the previous element and the current element are the same if they are then continue till you get to a unique element then check if sum of the left right and i where left is to the right of i and right is at the end
 
