#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define ll long long
int main()
{
    priority_queue< ll > pq;

    /// -----------------------------------push() and  pop()-------------------------------------------------

    pq.push(1);
    pq.push(3);
    pq.push(5);
    pq.push(2);
    pq.push(4);

    cout<<" priority_queue print : ";
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";    /// {5 , 4 , 3 , 2 , 1}
        pq.pop();
    }
    ///------------------- top() ,  emplace(), size()------------------------------------------

      cout<<"\n top element : " <<pq.top()<<endl;
      pq.emplace(6);
      pq.emplace(10);
      pq.emplace(5);
      cout<<" size: " <<pq. size()<<endl; /// 3
     cout<<" priority_queue print : ";
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";    /// {10 , 6 , 5 , 5 , 4 , 3 , 2 , 1}
        pq.pop();
    }
}

