#include <bits/stdc++.h>
using namespace std;

int main() {
list<int>l;

l.push_back(10);
l.push_back(20);
l.push_back(30);
l.push_back(40);
l.pop_front();
int sum=0;
for(auto x : l)
{
cout << x << " ";
sum+=x;
}
cout<<sum;


}
