#include <bits/stdc++.h>
using namespace std;

int main(){

    deque<int> dq;
    dq.push_back(3); // 3
    dq.emplace_back(2); // 3 2

    dq.push_front(2); //2 3 2 
    dq.emplace_front(3); // 3 2 3 2

    dq.pop_back();
    dq.pop_front();


    dq.back();
    dq.front();


    return 0;
}