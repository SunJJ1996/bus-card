#include "CardMach.h"
#include "TCard.h"

CardMach::CardMach(int no)
{
	line = no;
}
void CardMach::init( int numb, int dist[64] )//
{
    num=numb;
	this->dist=dist;
}
void CardMach::setDirection(int direct)
{
	this->direct=direct;
}
void CardMach::setCurrentStation(int n)
{
	stop=n;
}
int CardMach::swipe( TCard &card )
{
	char Type;
	int Line,Start;
	double val;
	Type=card.type;
	Line=card.line;
	Start=card.start;
	if(card.getOff(Type,Line,Start)&&Line==line)
	{
		double maxPrice = card.getMax();
		double val = diff(Type,Start,maxPrice);
		card.deduct(-val);
		card.setMax(0);
	}
	
}
double CardMach::max( char ty,class TCard &card )
	{
	double maxPrice;
	int distance;
	if(direct==1)
		distance = dist[num-1] - dist[stop];
	else
		distance = dist[stop];
	if(busTicket(distance,ty,maxPrice))
		card.max=maxPrice;
	else
		return 0;	
}


	
	
