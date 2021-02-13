#include <iostream.h>
#include<conio.h>
class demo
{
    private:
	int a,b;

    public:
	demo(int x,int y)
	{
		a=x;
		b=y;
	}
	demo(demo &p)
	{
	    a=p.a;
	    b=p.b;
	    cout<<"Value of a="<<a<<endl;
	    cout<<"Value of b="<<b<<endl;
	    cout<<"The object 2 is created."<<endl;
	}
};
void main()
{
    clrscr();
    demo obj1(10,30);

    demo obj2=obj1;

    getch();
}
