#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<ll>vec;

    /// ----------------------------vector push_back()   and  pop_back()----------------------------------------------------------------------

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    ///vector print with iteration begin() to end()

    for(auto it=vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<" ";              /// vector  vec{10 , 20 , 30 , 40 , 50 }
    }
    cout<<endl;
    vector<ll>copy_vec(vec);
    for(auto &val : copy_vec)cout<<val<<" ";   /// vector copy     copy_vec{10 , 20 , 30 , 40 , 50 }
    vec.pop_back();   /// last element delete in vector   {50}
    while(!vec.empty())
    {
        cout<<vec.back()<<" " ;         /// { 40, 30, 20, 10}
        vec.pop_back();

    }
    cout<<endl;
    cout<<vec.size()<<endl;   /// now vec size is 0 (zero )

    ///------------------------------------------insert() and erase()-----------------------------------------------------------------------------------------------

    vector<ll >v1(5); /// vector size 5 with all elements 0  : {0 , 0 , 0  , 0 , 0}
    vector<ll >v2(5, 10); /// vector size 5 with all elements 100  : { 10 , 10 , 10 , 10, 10}
    v2.insert(v2.begin(), 30);   /// 30 insert first position of v2    { 30, 10 , 10 , 10 , 10, 10  }
    v2.insert(v2.begin(), 2, 20);   /// 20 insert fisrt  position of v2 with 2 times:   { 20,20, 50 ,10 , 10 , 10 , 10, 10  }
    v2.insert(v2.end(), 2, 30);   /// 30 insert last position of v2 with 2 times:    { 20, 20 , 50, 10 , 10 , 10 , 10, 10  , 30, 30}
    v2. erase(v2.begin());     /// v2 frist element 20 remove from v2 vector  { 20 , 50, 10 , 10 , 10 , 10, 10  , 30, 30}
    ll any_pos= 1;
    v2. erase(v2.begin() + any_pos);     /// v2[1]=50 remove from v2 vector  {  20 , 10 , 10 , 10 , 10, 10  , 30, 30}

    for(auto & val : v2)cout<<val<<" ";

    ///--------------------------vec_name.front(), vec_name.back(), vec_name.at(pos ), vec_name.data()--------------------------------------------

    ll first= copy_vec.front(); /// first element   {10}
    ll last = copy_vec.back(); /// last element  {50}
    ll val = v2.at(1);   /// v2.at(pos) return the value of this position {10}

    ll * position = v2.data();   /// data() return pointer of first_element
    cout<<(*position)<<endl;


    ///-------------------------------vector.emplace() and emplace_back()-----------------------------------------------------------------------------------

    auto it = v2.emplace(v2.begin(), 15);   /// 15 insert at first position  { 15, 20 , 10 , 10 , 10 , 10, 10  , 30, 30}
    auto itt = v2.emplace(v2.end(), 35);      /// 35 insert at last position  { 15, 20 , 10 , 10 , 10 , 10, 10  , 30, 30,35}
    auto ittt = v2.emplace(v2.begin()+3, 5);    /// 15 insert at first position  { 15, 20 , 10 , 5,10 , 10 , 10, 10  , 30, 30,35}
    v2.emplace_back(40);  /// 40 insert last elements of v2    { 15, 20 , 10 , 5,10 , 10 , 10, 10  , 30, 30,35, 40}
    for(auto & val : v2)cout<<val<<" ";

    ///---------------------------------- vector.clear()------------------------------------------------------------------------------------------------------------

    v2.clear();  /// all elements of v2 are deleted and size of v2 is zero.
    cout<<v2.size();  ///0
}
