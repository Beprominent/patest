//
// Created by xie on 18-5-13.
//
#include <iostream>
#include <list>
using namespace std;

//创建一个list容器的实例LISTINT
typedef list<int> LISTINT;

int main(){
    LISTINT listOne;
    //声明iter为迭代器
    LISTINT::iterator iter;
    //从前面向listOne容器中添加数据
    listOne.push_front(2);
    listOne.push_front(1);
    //从后面向listOne容器中添加数据
    listOne.push_back(3);
    listOne.push_back(4);
    //从前向显示listOne中的数据
    cout << "listOne.begin() -- listOne.end()" << endl;
    for(iter = listOne.begin(); iter != listOne.end(); iter++){
        cout << *iter << " ";
    }
    cout << endl;
    //从后向显示listOne中的数据
    LISTINT::reverse_iterator iterator1;
    cout << "listOne.rbegin() -- listOne.rend()" << endl;
    for(iterator1 = listOne.rbegin(); iterator1 != listOne.rend(); iterator1++){
        cout << *iterator1 << " ";
    }
    cout << endl;

    /*
     * list的初始化
     */
    //list1初始化为空
    LISTINT list1;
    //list2最初有10个值为6的元素
    LISTINT list2(10,6);
    return 0;
}
