auto it = lower_bound(nums.begin(), nums.end(), val); this gives the iterator at the value which is in such a way that the first number lower than it is val

703. So i attempted this by sorting then simply searching and then inserting there is a heap solution to this 
20. This is to check if a given expression of parathesis is valid, this is my first stack question pretty easy except that pop doesnt give value and if by the end of for loop the stack is not empty then it is invalid

42. Rain water hard question this was very difficult but i got an answer n2 but the most optimal one is n so we take two pointers at right and left then two variables maxr and maxl then move then assign them 0. Then we check if the val at left is bigger than the maxl if yes then change the maxl to left pointer. If not then add the water in the pointer slot. Do the same on the right side and makes sure left<right.

155. Min stack basically we need to add a function to stack where it shows the smallest value currently in the stack so for that we make another stack which has the smallest at each point in the stack. remember that elements in the minimum stack can be repeated if a smaller number is not add so even if no smaller number is added the same minimum number has to be added. then do top of this second stack when the min is needed
150.
