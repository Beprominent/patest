//
// Created by xie on 18-5-7.
//

#include <map>
#include <iostream>
#include <string>
using namespace std;

int main(){

    //数据的插入－－使用insert函数插入pair数据
    map<int, string> mapStudent;
    mapStudent.insert(pair<int, string>(1, "student_one"));
    mapStudent.insert(pair<int, string>(2, "student_two"));
    map<int, string>::iterator iter;
    for(iter=mapStudent.begin(); iter!=mapStudent.end(); iter++){
        cout << iter->first << " " << iter->second << endl;
    }
    //数据的插入－－使用insert函数插入value_type数据
    map<int, string> mapStudent1;
    mapStudent1.insert(map<int, string>::value_type (1, "student_one"));
    mapStudent1.insert(map<int, string>::value_type (2, "student_two"));
    map<int, string>::iterator iterator1;
    for(iterator1=mapStudent1.begin(); iterator1!=mapStudent1.end(); iterator1++){
        cout << iterator1->first << " " << iterator1->second << endl;
    }
    //数据的插入－－使用数组方式插入数据
    map<int, string>mapStudent2;
    mapStudent2[1] = "student_one";
    mapStudent2[2] = "student_two";
    map<int, string>::iterator iterator2;
    for(iterator2=mapStudent2.begin(); iterator2!=mapStudent2.end(); iterator2++){
        cout << iterator2->first << " " << iterator2->second << endl;
    }
    //验证插入函数的作用效果：用insert函数插入数据，在数据的插入上涉及集合的唯一性这个概念，即当map中有这个
    //关键字时，insert操作是插入不了数据的，但是当用数组方式就不一样了，它可以覆盖以前改关键字对应的值
    map<int, string>mapStudent3;
    pair<map<int, string>::iterator, bool> Insert_Pair;
    Insert_Pair = mapStudent3.insert(pair<int, string>(1, "student_one"));
    if(Insert_Pair.second == true){
        cout << "Insert Sucessfully" << endl;
    }else{
        cout << "Insert Failure" << endl;
    }



    //map的大小
    int nSize = mapStudent1.size();
    cout << nSize << endl;


    //数据的遍历－－应用前向迭代器
    map<int, string>::iterator iterator;
    for(iterator=mapStudent1.begin(); iterator!=mapStudent1.end(); iterator++){
        cout << iterator->first << " " << iterator->second << endl;
    }
    //数据的遍历－－应用反向迭代器
    map<int, string>::reverse_iterator reverse_iterator;
    for(reverse_iterator = mapStudent1.rbegin(); reverse_iterator != mapStudent1.rend(); reverse_iterator++){
        cout << reverse_iterator->first << " " << reverse_iterator->second << endl;
    }
    //使用数组的形式
    int nSize1 = mapStudent1.size();
    /*
     * 此处应该注意：应该是for(int i = 1; i <= nSize1; i++)
     * 而不是for(int i = 0; i < nSize1; i++)
     */
    for (int i = 1; i <= nSize1; i++) {
        cout << mapStudent1[i] << endl;
    }


    //查找并获取map中的元素－－使用count函数来判定关键字是否出现，其缺点是无法定位数据出现位置，返回值要么是０，要么是１
    //使用find函数来定位数据出现位置，它返回的是一个迭代器，当数据出现时，它返回的是数据所在位置的迭代器，如果map中没有
    //查找的数据，它返回的迭代器等于end函数返回的迭代器.
    /*
     * 查找map中是否包含某个关键字条目用find()方法，传入的参数是要查找的key，在这里需要提到的是begin()和end()两个成员
     */
    map<int, string>::iterator search_iterator;
    int count_element;
    count_element = mapStudent1.count(1);
    search_iterator = mapStudent1.find(1);
    cout << count_element << endl;
    cout << search_iterator-> second << endl;


    //从map中删除元素－－erase()函数
    /*
     * iterator erase(iterator it); 通过一个条目对象删除
     * iterator erase(iterator first, iterator last); 删除一个范围
     * size_type erase(const Key&key); 通过关键字删除
     * clear()就相当于enumMap.erase(enumMap.begin(), enumMap.end());
     */
    map<int, string>::iterator erase_iterator;
    erase_iterator = mapStudent1.find(1);
    mapStudent1.erase(erase_iterator);
    //从map中删除元素，使用关键字删除
    /*
     * 如果删除了会返回１，否则返回０
     */
    int n = mapStudent1.erase(1);
    cout << n << endl;
    //成片的删除，一下把map清空
    mapStudent1.erase(mapStudent1.begin(), mapStudent1.end());


    //map中的swap用法.
    /*
     * map中的swap不是一个容器中的元素交换，而是两个容器所有元素的交换.
     */
    return 0;
}


/*
 *   map的基本操作函数：

     C++ maps是一种关联式容器，包含“关键字/值”对

     begin()         返回指向map头部的迭代器

     clear(）        删除所有元素

     count()         返回指定元素出现的次数

     empty()         如果map为空则返回true

     end()           返回指向map末尾的迭代器

     equal_range()   返回特殊条目的迭代器对

     erase()         删除一个元素

     find()          查找一个元素

     get_allocator() 返回map的配置器

     insert()        插入元素

     key_comp()      返回比较元素key的函数

     lower_bound()   返回键值>=给定元素的第一个位置

     max_size()      返回可以容纳的最大元素个数

     rbegin()        返回一个指向map尾部的逆向迭代器

     rend()          返回一个指向map头部的逆向迭代器

     size()          返回map中元素的个数

     swap()           交换两个map

     upper_bound()    返回键值>给定元素的第一个位置

     value_comp()     返回比较元素value的函数
 */