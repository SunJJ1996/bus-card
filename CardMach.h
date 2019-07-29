#include "TCard.h"

class CardMach
{
private:
	int line, num, direct; //线路编号、车站数量、方向
	int dist[64]; //车站间距
	int stop; //当前站号
public:
	CardMach( int no );
	void init( int numb, int dist[64] );//
	void setDirection( int direct);
	void setCurrentStation(int n);
	double max( char ty );
	
	int swipe( TCard &card );
};
