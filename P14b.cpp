#include<iostream> 
using namespace std; 
class myclass{ 
    public:
int i;
myclass *operator->() {return this;}
};


int main()
{
myclass ob; ob->i=10;
cout<<ob.i <<" "<<ob->i; 
return 0;
}
