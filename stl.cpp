/********************NOTES: STL*********************/

//increase - decrease que. from a2oj ladders cf que   + Pashmak and Flowers
// #include<bits/stdc++.h>
// using namespace std;

// void infopair()
// {
//     //Example for int data type...
//     pair<int,int> p = {2,3};
//     cout<<p.first<<" "<<p.second<<endl;
//     pair<int,pair<int,int>> p1 = {2,{3,4}};
//     cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
//     pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
//     cout<<arr[1].second<<endl;
//     cout<<"Pair completed"<<endl;
// }
// void infovector()
// {
//     // A empty vector
//     vector<int> vc;//{}
//     vc.push_back(1); // {1}
//     vc.emplace_back(2); //{1,2} //emplace_back is same as push_back

//     vector<pair<int,int>> vec;
//     vec.push_back({1,2});
//     vec.emplace_back(1,2);// don't required {}

//     // A vector of size 5 with everyone as x here x=10
//     vector<int> v1(5,10);
//     vector<int> v3(5,1); // by default value assigned will be all zeros.
//     vector<int> v2(v1);

//     //******Time for iterator
//     // suppose v = {10,20,30,40}
//     vector<int>::iterator it = v1.begin() ;//use cbegin if you don't want to change iterator.
//     cout<<*(it)<<endl;
//     it+=2;
//     cout << *(it) << endl; // you can perform all the operations like it+= l ; 1<=l<=n;

//     /********************
//     auto it = v1.end(); //pointing to the address after 40 [before last ele.]
//     auto it = v1.rend(); // it is pointing to address before ele. 10[before 1st ele.]
//     auto it = v1.rbegin(); // it is pointing to 40[at last ele.]
//     *********************/

//     cout<<v1[0] <<" " <<vc.at(0)<<endl;
//     cout<< vc.back() << endl; // To print last element of vector

//     //******* ways to print vector
//     for(vector<int>::iterator it = v1.begin();it!=v1.end(); it++)
//     {
//             cout<< *(it) <<" ";
//     }
//     cout<<endl;
//     for(auto it = v1.begin();it!=v1.end(); it++)
//     {
//     cout<< *(it) <<" ";
//     }
//     cout<<endl;
//     // auto is for it automatically converts it into  other data type
//     for(auto it: vc)
//     {
//         cout<< it <<" ";//0
//     }
//     cout<<endl;
//     //*******erase function
//     // suppose v = {10,20,30,40,50}
//     vc.erase(vc.begin()); // argument should be any iterator {20,30,40,50}
//     vc.erase(vc.begin()+2, vc.begin()+4); // to erase range of begin+2 to end-1 ,here vc.begin+4 = end
//     vector<int> v(2,100); //{100,100}
//     v.insert(v.begin(),200);//{200,100,100}
//     v.insert(v.begin()+1,2,10);//{200,10,10,100,100}
//     cout<<v.size()<<endl; // gives number of elements in vector

//     vector<int> copy(2,5);
//     v.insert(v.begin(),copy.begin(),copy.end()); // through this way can insert entire vector or
//     //some part of vector in other vector directly syntax given above for example

//     v.pop_back(); // pop the element form last
//     //v1.swap(v3);// you can swap 2 vectors of same size
//     cout<<"V1: ";
//     for (auto it = v1.begin();it < v1.end(); ++it)
//         cout << *it << " ";
//     cout<<endl;
//     cout<<"V3: ";
//     for(auto it = v3.begin();it<v3.end();++it)
//     {
//         cout<< *it <<" ";//
//     }
//     cout<<endl;
//     v.clear() ;// To erase the entire vector
//     cout<< v.empty() ;



// }
// // vector is better than list in complexity perspective
// void infolist()
// {
//     list<int> l;
//     l.push_back(1);
//     l.push_front(2); 
//     l.emplace_front(3);
//      for(auto it: l)
//     {
//         cout<< it <<" ";//0
//     }

// }
// // all the func. vector is same 
// void infodeqe()
// {
//     deque<int> d;
//     d.push_back(1);
//     d.push_front(2);
//     d.emplace_front(3);
//     for(auto it: d)
//     {
//         cout<< it <<" ";//0
//     }
//     d.pop_front();// similar pop_back for last
//     d.front();
//     d.back();
// }
// void infostack()
// {
//     stack<int> s,s1;
//     s.emplace(3);// same as push
//     s1.emplace(2);
//     s.swap(s1);
//     // top and pop , size function are for stack
// }
// void infoque()
// {
//     //similar to stack 
//     queue<int> q;
//     q.push(1);
//     q.push(2); //{1,2} here also you can use emplace
//     q.back(); // to get last element
//     //front for first element
// }
// void infopq()
// {
//     priority_queue<int> p;
//     p.push(5);
//     p.push(2); //{5,2}
//     p.push(8); //{8,5,2}
//     // p stores all the elements in decending order.. top , pop operations are  simillar as stack 
//     // ***********minimumheap 
//     priority_queue<int,vector<int>,greater<int>> p1;
//     // greater<int> stores the data in reversible manner , it means now p will store data in decending order
//     p1.push(5);
//     p1.push(2);// {2,5}
//     p1.push(8);// {2,5,8}
//     // other func. are same
// } 
// void infoset()
// {
//     //set is just taking logarithmic time for erase and some fun.s
//     set<int> s;// it stores all the elements in sorted  order and store all the unique elements
//     s.insert(1);// {1}
//     s.emplace(2);//{1,2}
//     s.insert(0);//{0,1,2} // fumctionality of insert is same as vector.
    
//     //new function

//     auto it = s.find(2);// if the element is not presnt suppose we are using find for 3 then ---> it will point to s.end();
//     s.erase(2); //it will erase that element from  the set  
//     int c = s.count(1); // 1 is present return the count 1

//     // suppose {1,2,3,4,5} [set]
//     for(int i=0;i<5;i++)
//     {
//         s.insert(i+1);
//     }
//     auto itp = s.find(1);
//     s.erase(itp); 
//     auto it1 = s.find(2);
//     auto it2 = s.find(4);
//     s.erase(it1,it2);
//     for(auto i=s.begin(); i!=s.end();i++)
//     {
//         cout<<*(i)<<" ";
//     }
//     // Lower bound[lb]: pointing to that element if present, else pointing to imdeate next greater element than that
//     // lower_bound , upper_bound returns the iterator

//     //Upper bound[ub]: always return iterator pointing the imediate next greater element to that element 
//     // Bothe func. works in logn time and this are also used for binary search, we can use this for any stl.


// }
// void infomultiset()
// {
//     multiset<int> m;
//     //same as set except it stores duplicate elements
//     m.insert(1);
//     m.insert(1);
//     m.insert(1);
//     m.insert(2);
//     m.erase(1); // it will erase all the ones
//     int c = m.count(1); // no. of one 
//     //only a single one is erased
//     m.erase(m.find(1)); //  it wil erase just 1 one as it will point to only first 1 in the element

//     //m.erase(m.find(1),m.find(1)+2); // all element between this iterators
// }
// void infous()
// {
//     unordered_set<int> s;
//     //set takes log time 
//     // unord. set stores all the elements in any order all the func. of set can be
//     // applicable except lower and upper bound , In average time complexity is constant time
// }
// void infomap()
// {
//     map<int,int> m;
//     /*
//      it can be:
//      map<int,pair<int,int>> m;
//      map<pair<int,int>,int> m;
//     */
//    // keys and value can be anything
//    m[1] = 2;
//    m.insert({3,1});// same for insert
//    m.emplace(2,4); 
//    /* map also stores all tehe things in the sorted order 
//      {
//         for given example map will look like:
//         { 1,2 }
//         { 2 ,4}
//         { 3, 1} 
//         sorted according to keys
//      }
//      */
//     auto it = m.find(3); // here 3 is a key or first element
//     //cout << *(it).second <<endl;
//     auto it1 = m.find(7);// points to end of container as 7 is not present in map
//     // and also have same syntax for ub and lb as set
//     /*
//     map::erase() is a built-in function in C++ STL which is used to erase element from the container. It can be used to erase keys, elements at any specified position or a given range. 

//     Syntax for erasing a key:
//     map_name.erase(key)
//     Parameters: The function accepts one mandatory parameter key which specifies the key to be erased in the map container. 

//     Return Value: The function returns 1 if the key element is found in the map else returns 0. 
//     [res: gfg]
//     */
// }
// void infomultimap()
// {
//     // every thing is same as map, only it can store multiple keys
//     // only m[key] can not be used here
//     // --> unordered map same as map but it stores element in any order 
// }
// bool comp(pair<int,int> p1, pair<int,int> p2)
// {
//     if(p1.second <p2.second)
//     return true;
//     else if( p1. second == p2.second)
//     {
//         if(p1.first > p2.first) return true;
//     }
//     return false;
// }
// void extra()
// {
//     // sort(a,a+n) --> to sort entire array
//     // sort(a+2,a+4)--> sort perticular part
//     // sort(a,a+n,greter <int> )--> sort in decending order
//     pair<int,int> a[] = {{1,2},{2,1},{4,1}};
//     //int m = *max_element(a.begin(),a.end()); --> to finding max element 
//     // for sorting according to 2 nd element :
//     // if second element of pair is same then sort them according to 1st element but in decending

//     sort(a,a+2,comp);
    
//    // simillarly can make diffrent comp functions
//    int num = 7;
//    int c = __builtin_popcount(num); // it is used to count number of 1's(set bits) in its binary form 
//    cout<<c<<endl; 
//    //here for string, it can even used for other stls
//    string s = "123";
//    do
//    {
//        cout<< s <<endl;
//    } while (next_permutation(s.begin(),s.end()));
//    //next_permutation(s.begin(),s.end()) --->  return true  or false based on whether
//    // next new permutation is possible[true] or not[false]
// }
// int main()
// {
//     infopair();
//     infovector();
//     extra();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define gcd(x,y) __gcd(x,y)
// bool comp(int a,int b)
// {
//     return (a>b);
// }
// int arr[1001];
// int div(int n)
// {
//     int c=0;
//     if(arr[n]!=-1)
//     return arr[n];
//     else
//     {
//         for(int i=1;i<=sqrt(n);i++)
//         {
//             if(n%i==0)
//             {
//             if(n/i!=i)
//             c++;
//             c++;
//             }
//         }
//     }
//     //cout<<"c: "<<c<<"\n";
//     arr[n] = c;
//     return c;
// }
// /*If the wind blows to the east, the boat will move to (x+1, y).
// If the wind blows to the south, the boat will move to (x, y - 1).
// If the wind blows to the west, the boat will move to (x - 1, y).
// If the wind blows to the north, the boat will move to (x, y + 1)
// */
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,r = 0;
//         cin>>n;
//         int a[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//         }
//         sort(a,a+n);int diff,temp;
//         vector<int> v;
//         for(int i=0;i<n-1;i++)
//         {
//             temp = a[i+1]-a[i];
//             diff = min(diff,temp);
//         }
//         if(diff == 1)
//         {
//            cout<<"2\n";
//         }
//         else if(diff>1)  cout<<"1\n";
//         else
//         {
//             map<int,int> m;
//             for(int i=0;i<n;i++)
//             {
//                 m[a[i]]++;
//             }
//             if(m.size()==1)
//             {
//                 cout<<n<<"\n";
//                 continue;
//             }
//             sort(m.begin(),m.end(),comp);
//             auto j = m.begin();
//             for(auto i=m.begin()+1;i!=m.end();i++)
//             {
//                 if(abs(i.first - j.first) > 1)
//                 {
//                     j.second-=i.second;
//                     r+=i.second;
//                     i.second = 0;
//                 }
//                 if(j.second == 1)
//                 break;
//             }
//             cout<<r+1<<"\n";
//         }
//     }
    
//     return 0;
// }