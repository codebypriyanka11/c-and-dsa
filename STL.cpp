
#include <bits/stdc++.h>
using namespace std;
// pairs
void explainpair()
{
    pair<int, int> pi = {1, 2};
    cout << pi.first << " " << pi.second << endl;
    pair<int, pair<int, int>> q = {3, {4, 5}};
    cout << q.first << " " << q.second.second << " " << q.second.first << endl;
    pair<int, int> arr[] = {{2, 3}, {3, 4}, {4, 5}};
    cout << arr[1].second << endl;
    pair<char, int> p = {'a', 1};

    // go to 131 to 139
}
void explainVector()
{

    vector<int> vec1 = {1, 2};
    cout << "vector size of vec1 :" << vec1.size() << endl;
    cout << endl;

    //  yaha ham vec ka size bata raha hai (3) or sirf ak hi element repeatedly rakh rahe hai(3)
    vector<char> vec2(2, 3);
    cout << "element in vec2:" << " ";
    for (int val : vec2)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "vector size of vec2 :" << vec2.size() << endl;
    cout << endl;

    vector<int> vec3(vec1);
    cout << "vector size of vec3 :" << vec3.size() << endl;

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.emplace_back(6);
    vec.emplace_back(7);
    vec.emplace_back(8);
    vec.pop_back();

    //   for each
    cout << " without using erase method :" << " ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    //   first index ka element ko delete karna ka liya
    vec.erase(vec.begin());
    vec.erase(vec.begin() + 2);
    //  vec.erase(vec.begin()+1,vec.begin()+3);

    //   for each
    cout << " with using erase method :" << " ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "vector size of vec :" << vec.size() << endl;
    cout << "vector capacity of vec :" << vec.capacity() << endl;
    cout << "To check the 1 index  element :" << " " << vec[1] << endl;
    cout << "To check the 2 index element :" << " " << vec.at(2) << endl;
    cout << "Front element" << " " << vec.front() << endl;
    cout << "last element" << " " << vec.back() << endl;
    cout << endl;
}
void vectorMethod()
{
    vector<int> vec = {1, 2, 3};
    // vector me insert karna ka liya at any index
    vec.insert(vec.begin() + 2, 100);

    // sab kuch clear karna ka liya
    // vec.clear();

    // for each
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    // after clear it become zero
    cout << "size of vec : " << " " << vec.size() << endl;
    // it remain same even after clear
    cout << "capacity of vec : " << " " << vec.capacity() << endl;

    // vector iterators
    // vec.begin --> se hame us element ki ememory ki location mil jati hai or fir ham dereference (*) use kar ke us element ko acess kar sakte hai
    // vec.end --> last element ko nahi balki uss se agle vali location ko point karta hai jaha garbage value store hoti hai
    cout << "vector first element" << " " << *(vec.begin()) << endl;
    cout << "vector last element" << " " << *(vec.end() - 1) << endl;
    // how we use vector iterators
    // forward loop
    vector<int>::iterator iti;
    cout << " using forword for loop in vector iterator :" << " ";
    for (iti = vec.begin(); iti != vec.end(); iti++)
    {
        cout << *(iti) << " ";
    }
    cout << endl;
    // backword loop
    vector<int>::reverse_iterator it;
    cout << "backword for loop in vector iterator :" << " ";
    for (auto it = vec.rbegin(); it != vec.rend(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    // you can also write thi like this -->
    // first way -->
    // cout<<"backword for loop in vector iterator :" <<" ";
    // for(auto it = vec.rbegin();it != vec.rend() ; it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;
    // second way -->
    // cout<<"backword for loop in vector iterator :" <<" ";
    // for(vector<int>::reverse_iterator it = vec.rbegin();it != vec.rend() ; it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;

    // vector ka andar pair
    vector<pair<int, int>> vec7 = {{1, 2}, {3, 4}, {5, 6}};
    vec7.push_back({7, 8});  // insert
    vec7.emplace_back(8, 9); // in-place objects create
    cout << "using pair in vector" << endl;
    // for(pair<int,int> a : vec7)
    for (auto a : vec7)
    {
        cout << a.first << " " << a.second << endl;
    };
}
void explainList()
{
    //  list me ham push from front and back dono se kar sakte hai or pop from front or back se bi kar sakte hai
    // > push_back & push_front
    // > emplace_back & emplace_back
    // >pop_back & pop_front
    // size,erase,clear,begin,end,rbegin,rend,insert,front,back
    // Rendom access is not possible as Deque
    list<int> list = {1, 2, 3};
    list.push_back(4);
    list.push_back(5);
    list.push_front(6);
    list.push_front(7);
    list.pop_back();
    list.pop_front();
    for (int val : list)
    {
        cout << val << " ";
    }
    cout << endl;
}
void explainDeque()
{
    // doubleEndedQueue
    // same as list two point to perform methods
    //      > push_back & push_front
    //  > emplace_back & emplace_back
    //  >pop_back & pop_front
    //  size,erase,clear,begin,end,rbegin,rend,insert,front,back
    // * dequeue mean pop the element in deque
    // * Rendom access possible hai List me nahi hota hai

    deque<int> d = {1, 2, 3};
    for (int val : d)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << d[2];
}
void explainstack()
{
    // stack --> LIFO
    stack<int> s;
    stack<int> s1;
    //     .push,emplace
    //     .top
    //     .pop
    //     .size
    //     .empty
    //     .swap --> too stacks ka element change ho jayega
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.swap(s);
    cout << "top = " << " " << s.top() << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << "size of stack :" << " " << s.size() << endl;
}
void explainQueue()
{
    // FIFO -->front(exit part),rear(entering part)
    //    time complexity
    //  .push,emplace       O(1)
    //     .top              O(1)
    //     .pop               O(1)
    //     .size
    //     .empty
    //     .swap --> too stacks ka element change ho jayega
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}
void priorityqueue()
{
    // --> it use maxheap ya minheap
    // --> visulize ir as a stack
    // --> largest value element == highest priority
    priority_queue<int> q;
    priority_queue<int, vector<int>, greater<int>> r;
    //   time complexity
    // .push,emplace      O(logn)
    //  .top              O(1)
    //  .pop               O(logn)
    //  .size
    //  .empty
    q.push(10);
    q.push(2);
    q.push(5);
    cout << "size of priority queue :" << " " << q.size() << endl;
    while (!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }
}
void explainmap()
{
    map<string, int> m;
    // m[key] = value;    value ko change karna ka liya
    // .insert,emplance
    // .count
    // .erase
    // .find
    // .size,empty,erase
    m["tv"] = 100;
    m["laptop"] = 50;
    m["headphones"] = 200;
    m["table"] = 120;
    m["watch"] = 50;
    m.insert({"camera", 25});
    m.emplace("shoes", 50);
    m.erase("tv");
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << "count = " << " " << m.count("shoes") << endl;
    cout << m["laptop"] << endl;
    cout << endl;
    if (m.find("camera") != m.end())
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    // TYPES OF MAP
    // *Multi Map--> is me multiple keys hoti hai (duplication) iske andar square brackets notation use nahi kar sakte hai. --> multimap<string,int>m;
    // *Unordered Map --> unordered_map<string,int>m;
}
void explainmutlimap()
{
    multimap<string, int> m;
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("laptop", 120);
    m.emplace("camera", 50);
    //   m.erase("tv"); // sare tv get erase
    m.erase(m.find("tv"));
    cout << "Element in this multimap :" << " " << endl;
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;

    //   Find something
    if (m.find("camera") != m.end())
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}
void explainunorderedmap()
{
    unordered_map<string, int> m;
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("laptop", 120);
    m.emplace("camera", 50);
    //   m.erase("tv"); // sare tv get erase
    m.erase(m.find("tv")); // is se bi sare tv delete ho jayega kyo ki unordered me duplication nahi hoti
    cout << "Element in this unordered map :" << " " << endl;
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;

    //   Find something
    if (m.find("camera") != m.end())
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}
void explainset()
{
    set<int> s;
    // *insert,emplace
    // *count
    // *erase
    // *find
    // *size,empty,erase
   // * lower_bound --> agar aap koi no. iss me search karna chhate hai to vo aap is me insert kare chate to ya aap ko vo no. dega ya ska paas ka koi no. dega Example -- you insert 6 so it will give you 5 because 6 is not in this set so it will give you most inearest no. like 5
//    upper_bound --> value should not be less than the inserted key matlab ya ki aggar aap 4 key put karte hai to value 4 se badi hogi 4 ya uss se chhoti nahi 
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    cout<<"size of s : "<<s.size()<<endl;
    for(auto val : s){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"lower bound of 6 in this set : "<<" "<<*( s.lower_bound(6))<<endl;
    cout<<"upper bound of 4 in this set : "<<" "<<*( s.upper_bound(4))<<endl;

    // TYPE OF SET
    //*Multi set  --> duplication allowed --> multiset<int> s;
    //*UNordered set  --> unordered_set<int> s;
}
void explainmultiset(){
    multiset<int> s;
     s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    cout<<"size of s : "<<s.size()<<endl;
    for(auto val : s){
        cout<<val<<" ";
    }
    cout<<endl;
}
void explainunordredset(){
    // unsorted data store hota hai to upper or lower bound iss par kam nahi karte
    unordered_set<int> s;
     s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    cout<<"size of s : "<<s.size()<<endl;
    for(auto val : s){
        cout<<val<<" ";
    }
    cout<<endl;
}
void explainsorting(){
    // sort(arr,arr+n)
    // sort(arr,arr+n,greater<int>())
    // sort(v.begin(),v.end())
    int arr[5] = {3,7,5,1,9};
    sort(arr,arr+5);
    for(auto val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    
    cout<<"Sorting for vector"<<endl;
    vector<int> vec ={7,9,5,4,8,7,2};
    sort(vec.begin(),vec.end());
    for(auto val : vec){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"Decressing order Sorting for vector"<<endl;
    sort(vec.begin(),vec.end(),greater<int>());
    for(auto val : vec){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"sorting for pair "<<" "<<endl;
    vector<pair<int,int>> vec3 = {{5,3},{6,2},{9,7}};
    sort(vec3.begin(),vec3.end());
    for(auto val : vec3){
        cout<<val.first<<" "<<val.second<<endl;
    }
    // to arrange than in incressing order we have to use custom comparator
}
//  bool comparator(pair<int,int>p1,pair<int,int>p2){
//      // second value ka basis bar sorting hoti hai
//         if(p1.second <p2.second) return true;
//         else return false;
//     }
 bool comparator(pair<int,int>p1,pair<int,int>p2){

    // agar 2 element kinihi doo element ka equal hoga to comparision first ones par hoga 
        if(p1.second <p2.second) return true;
        if(p1.second>p2.second) return false;
        if(p1.first < p2.first) return true;
        else return false;
    }
void explaincostomcomparator(){
   
     cout<<"sorting for pair "<<" "<<endl;
    vector<pair<int,int>> vec3 = {{5,2},{6,2},{9,7}};
    sort(vec3.begin(),vec3.end(),comparator);
    for(auto val : vec3){
        cout<<val.first<<" "<<val.second<<endl;
    }
}
void otheralgorithm(){
    // Reverse --> reverse(v.begin(),v.end())
    // next permutation --> next_permutation (v.begin(),v.end())
    // swap,min,max
    vector<int> vec = {1,2,3,4,5};
    // reverse(vec.begin(),vec.end());
    reverse(vec.begin()+1,vec.begin()+3);
    for(auto val : vec){
        cout<<val<<" ";
    }
    cout<<endl;
cout<<endl;
string str = "asd";
next_permutation(str.begin(),str.end());
cout<<"next permutayion of string asd : "<<" "<<str<<endl;
prev_permutation(str.begin(),str.end());
cout<<"previous permutayion of string asd : "<<" "<<str<<endl;
cout<<endl;
cout<<endl;
cout<<"maximum value between 5 and 7 : "<<" " <<max(5,7)<<endl;
cout<<" minimum value between 8 and 9 : " <<" "<<min(8,9)<<endl;
cout<<endl;
cout<<endl;
int a=5,b=7;
cout<<"value of a before swap : "<<" "<<a<<" " <<"value of b before swap : "<<" "<<b<< endl;
swap(a,b);
cout<<"value of a after swap : "<<" "<<a<<" " <<"value of b after swap : "<<" "<<b<< endl;

// *max and min element 
// max_element(v.begin(),v.end());
// min_element(v.begin(),v.end());
// *binary search
// binary_search(v.begin(),v.end(),target);
// *count set bits 
// __builtin_popcount();
// __builtin_popcountl();
// __builtin_popcountll();
cout<<endl;

vector<int>vec1={1,2,3,4,5};
cout<<" maximum value in vec1 :"<<" " << *max_element(vec1.begin(),vec1.end())<<endl;
cout<<" minimum value in vec1 :"<<" " << *min_element(vec1.begin(),vec1.end())<<endl;
cout<<endl;
cout<<"binary search"<<endl;
cout<<" search 4 in vec1 :" <<" " <<binary_search(vec1.begin(),vec1.end(),4)<<endl;
}
int main() 
{
    // explainpair();
    // explainVector();
    // vectorMethod();
    // explainList();
    // explainDeque();
    // explainstack();
    // explainQueue();
    // priorityqueue();
    // explainmap();
    // explainmutlimap();
    // explainunorderedmap();
    // explainset();
    // explainmultiset();
    // explainunordredset();
    // explainsorting();
    // explaincostomcomparator();
    otheralgorithm();
    return 0;
}
