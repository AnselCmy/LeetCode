# 解题思路

## c++
设置两个迭代器iter1，iter2，最开始指向vector的前两个元素
会有两种情况
+   第一种是两个元素不等，可以iter1和iter2都同时加一移动
+   第二种是两个元素相等，则需要iter2向后移动再判断。这里在c++实现的时候，用erase()可以返回删除元素的下一个元素的迭代器

之前犯了一个小错误，在使用erase的时候，我以为删除vector的一个元素后，iter仍然是指向原来的元素，但是却发现iter指向的元素向后移动了一位，说明iter的性质类似于索引
```c++
vector<int> a{1,2,3,4};
auto iter = a.begin()+2;
cout << *iter << endl;
a.erase(iter-1);
cout << *iter << endl;
```