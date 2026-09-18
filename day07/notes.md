auto it:hash will give a pair key value
use high=max(high,num) in a loop to get highest num
when checking for key in hash use find instead of count cause u can check if the iterator it=end if it is then it is not there and at the same time get the value at it so only one hash function instead of two like for if u checked count then used hash[key]


49. Group anangram: this was difficult there are two ways to do this question one u sort each word and use that as the key with the result index as the value and if that key is already there then add it to the result with the result index which is the value if it is not ther then make a new index and add there
The second way is the correct way you make vector of the count of each letter using count26 then mkae that into a word to be stored as the key now to that key have a string vector as the value now for every word check its count in the map as key and append the word into the value thhn use NEW TOPIC we can iterator through a hashmap then it will give a key value pair so then append the second to the result.
347. This was an okay question i used two hash maps the second having key as the freq and the value being a vector of numbers with that freq then finding highest freq and using it to find the numbers then decreasing high till it k becomes 0
but this is not the best answer which is bucket sort remeber to do this
