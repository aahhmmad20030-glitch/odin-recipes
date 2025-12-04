#include <iostream>
using namespace std;

class person
{
    string name;
    int age;
    protected:
    int x=5;
public:
    person(string n, int a)
    {
        name=n;
        age=a;
        
    }

    void print()
    {
        cout<<"name is :"<<name<<endl;
        cout<<"age is :"<<age<<endl;
    }
};

class emp : private person
{
    int salary;
public:
    emp(string n,int a, int s):person(n,a)
    {
        salary=s;
    }
    void print()
    {
        cout<<"x"<<x<<endl;
        person::print();
        cout<<"salary   "<<salary<<endl;

    }
};


class man : public emp
{
    string title;
public:
    man(string n,int a, int s,string t):emp(n,a,s)
    {
        title=t;
    }
    void print()
    {
        emp::print();
        cout<<"title  "<<title<<endl;

    }
};

int main()
{
    person a("ahmed",22);
    a.print();
    emp x("ahmed",22,5000);
    man m("ahmed",22,5000,"manager");
    m.print();
    return 0;

}
