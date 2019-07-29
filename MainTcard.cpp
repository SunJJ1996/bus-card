#include<iostream>
#include<string>
#include"TCard.h"

using namespace std;

main()
{
	TCard c1('S');
    TCard c2('G');
	c1.getmoney();cout<<c1.getmoney()<<endl;
	c1.deduct(-200);
    c1.getmoney();cout<<c1.getmoney()<<endl;
	c1.getOn(34,2);
	c1.deduct(1.5);
    c1.getmoney();
	cout<<c1.getmoney()<<endl;
}