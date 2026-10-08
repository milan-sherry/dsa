deque<int> dq;

dq.push_back(x);    // add to the back
dq.push_front(x);   // add to the front (you probably won't need this today)
dq.pop_back();      // remove from the back
dq.pop_front();     // remove from the front
dq.front();         // peek at the front element
dq.back();          // peek at the back element
dq.empty();         // true if there's nothing in it
dq.size();          // number of elements

33. This is rotated array we need to search for check for mid then check if mid is target then now chekc the sorted side if the target in the range then move the high and lows accordingly
239. This is first hard question. We use double queue which is monotonic meaning that it is descending order so when new element added to queue if it is bigger than the rest of the queue then it pops till it is not. And the elements get removed from the font only when we move the window and the element in the front is not part of the window anymore so we use the indexes.
