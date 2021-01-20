
#include <bits/stdc++.h>
#include <set>
using namespace std;
#define ll long long
int main()
{
    set< ll > S;

    /// ------------------------------------insert()----------------------------------------

    S.insert(4);
    S.insert(3);
    S.insert(2);
    S.insert(1);
    S.insert(5);

    /// set print with iterator
    set<ll> :: iterator it;
    for(it = S.begin(); it != S.end() ; it++)
    {
        cout<<*it<<" " ;             /// 1, 2, 3 , 4, 5
    }
    cout<<endl;
    /// set print with another process with auto iterator
    for(auto val : S)
    {
        cout<<val<< " ";           // 1 , 2 , 3 , 4 , 5
    }
    cout<<endl;
    S.insert(S.begin(), 10); // { 1, 2, 3,4, 5, 10}

    /// ----------------------------- set.find()--------------------------------------

    auto ff= S.find(10);
    if(ff == S.end())
    {
        cout<<" sorry !! element is not found. "<<endl;
    }
    else
    {
        cout<<" Yes .... found it . " <<endl;
        cout<<" element :  "<<(*ff)<<endl;
        cout<<" index  position : "<<distance( S.begin(),ff)<<endl;
    }
/// ------------ lower_bound() and upper_bound()------------------------------

    S.insert(11);
    S.insert(12);
    // S {1, 2, 3 , 4, 5, 10,11,  12}
    auto  present = S.lower_bound(12);          /// return element which is less than or equal of search_element ( <=12)
    if(present == S.end())
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<" element :  "<<(*present)<<endl;
        cout<<" index  position : "<<distance( S.begin(),present)<<endl;
    }


    auto up = S.upper_bound(10);        /// return element which is greater than of search_element ( >10)
    if(up == S.end())
    {
        cout<<"NO"<<endl;
    }
    else
    {

        cout<<" element :  "<<(*up)<<endl;
        cout<<" index  position : "<<distance( S.begin(),up)<<endl;
    }

    ///set assign in another set with two method
    set< ll > new_S(S.begin(), S.end()); // S {1, 2, 3 , 4, 5, 10,11,  12}
    //OR
    //  set< ll > new_S(S);


    /// ---------------------- erase() and clear()---------------------------------

    // name.erase(position);
    // name.erase(start_pos , end_pos);
    auto  ele_10= S.find(10);
    auto ele_5 = new_S.find(5);
    S.erase(ele_10);          // S {1, 2, 3 , 4, 5,11,  12}
    new_S.erase(ele_5,new_S.end()) ;    // S {1, 2, 3 , 4}

    new_S.clear();  // 0




}

