#include<iostream>
using namespace std;

class student
{
    int rollno;
    public:
    void get(int x)
    {
        rollno=x;
    }
    void show()
    {
        cout<<"Roll no. is ="<<rollno<<endl;
    }
};

class test : public student
{
    protected:
    float t1,t2;
    public:
    void getn(int a,int b)
    {
        t1=a,t2=b;
    }
    void shown()
    {
        cout<<t1<<endl<<t2<<endl;
    }
};

class sport
{
    protected:
    float sn;
    public:
    void getsn(int y)
    {
        sn=y;

    }
    void showsn()
    {
        cout<<sn<<endl;
    }
};

class result : public test,public sport
{
    public:
    void display()
    {
        show();
        shown();
        showsn();
        cout<<"TOTAL MARKS :"<<t1+t2+sn;

    }
};

int main()
{
    result r;
    r.get(100);
    r.getn(94,95);
    r.getsn(47);
    r.display();

    return 0;
}
