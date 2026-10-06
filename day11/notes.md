


424. Here the question says taht we can replace k letters in a substring find longest substring of same elelments so like aaaa from aabb where k is 2, to do this we keep track of max freq right left 
and we use the condition r-l+1-max>k ie if there are more than k spaces then it would move the l. The difficult thing was that max doesnt need to be changed it should stay the max it ever reached 
meaning if it was 3 then the max should turn to 2 leave it as 3. That is becasue the max value is directly related to the final value as the max +k is final it doesnt have to change unless something 
bigger is found and also it doesnt matter it left moving condition as that means the r-l will stay the same till a new max which is a bigger max is found so it wont care for lower windows so doesnt 
change to lower window.
