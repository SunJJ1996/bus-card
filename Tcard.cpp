#include "TCard.h"
#include<iostream>
using namespace std;
TCard::TCard(char ty) {
	type = ty;
	money = 0.0; //余额初值
	line = 0; //表示无上车信息
}
int TCard::getOff( char &ty, int & lineN, int & sta )
{
	if( line == 0 ) 
		return 0;
	ty = type;
	lineN = line;
	sta = start; //通过参数返回数据
	line = 0; //清空上车信息
	return 1;
}
void TCard::getOn( int line, int number)
{
	this->line=line;
	this->start=number;

}

	

int TCard::deduct( double v )
{
	money-=v;
	if(money<=0)
	{
		cout<<"it is not have enough money"<<endl;
	}
	if(money>0)
	{
		return money;
	}
}
double TCard::getmoney()
{
	return money;
}
int TCard::getNum()
{
	return start;//return number
}
int TCard::getLine()
{
	return line;
}
 

	
double TCard::getMax()
{
	return max;

}
void TCard::setMax(int n)
{
	max=0;
}