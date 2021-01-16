#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define ll long long
int main()
{
    queue< ll > Q;

    /// -----------------------------------push() and  pop()-------------------------------------------------

    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    Q.push(5);
    queue< ll >Qq(Q);   /// copy queue

    cout<<" Q queue print : ";
    while(!Q.empty())
    {
        cout<<Q.front()<<" ";    /// {1 , 2 , 3 , 4 , 5}
        Q.pop();
    }
    ///------------------- front() , back(), emplace(), size(), swap()-------------------------------------------

    cout<<"\n front element of queue: "<<Qq.front();
    cout<<"\n last element of queue: "<<Qq.back();
    cout<<"\n queue size is : " <<Qq.size();
    Qq.emplace(6);           /// add 6,7 last position of Qq queue
    Qq.emplace(7);

    queue<ll> for_swap;
    for_swap.push(10);
    for_swap.push(20);
    for_swap.push(30);
    cout<<"\n Qq queue print : ";
    while(!Qq.empty())
    {
        cout<<Qq.front()<<" ";              /// {1 , 2 , 3 , 4 , 5 , 6 , 7}
        Qq.pop();
    }

    for_swap.swap(Qq); /// swap()

    cout<<"\n Qq queue print : ";
    while(!Qq.empty())
    {
        cout<<Qq.front()<<" ";              /// {10 20 30 }
        Qq.pop();
    }

}

