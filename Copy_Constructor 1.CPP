#include<iostream.h>
#include<conio.h>
class weight
{
	private:
	      int gram;

	public:
	       weight()
	       {
	       }
	       weight(int a)
	       {
			a=gram;
	       }
	       weight(weight &w)
	       {
			gram=w.gram;
	       }
};
void main()
{
	int a,b;
	clrscr();
	weight obj1(350);
	weight obj2(650);
	if(a<b)
	{
		cout<<"Value of gram(obj1) is larger that value of gram(obj2)";
	}
	else if(a>b)
	{
		cout<<"Value of gram(obj2) is larger that value of gram(obj1)";
	}
	else
	{
		cout<<"Error!"<<endl;
	}
	weight obj3=obj2;
	cout<<"\n The object 3 is created."<<endl;

	getch();
}