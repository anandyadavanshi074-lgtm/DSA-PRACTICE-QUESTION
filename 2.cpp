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


###class####


#include <bits/stdc++.h>
using namespace std;

class player{
   private:
    
    string name;
     string age;
    
    
    public:
    
    string team;
    int Age;
    
    void data(){
        cout<<name;
        cout<<age<<"age";
    }
    void data2(){
        cout<<Age;
        cout<<team<<" "<<"team";
        cout<<"empaty";
    }
    
    
    
    
    
    
};

int main() {
    player p1;
     player p2;
     player p3;
    // p1.age="anand";
    // p1.data();
    p1.team="rcb";
    p1.Age=19;
    p1.data2();
    p2.team="csk";
    p2.Age=20;
    p2.data2();
    p3.Age=21;
    p3.data2();
