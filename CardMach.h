#include "TCard.h"

class CardMach
{
private:
	int line, num, direct; //��·��š���վ����������
	int dist[64]; //��վ���
	int stop; //��ǰվ��
public:
	CardMach( int no );
	void init( int numb, int dist[64] );//
	void setDirection( int direct);
	void setCurrentStation(int n);
	double max( char ty );
	
	int swipe( TCard &card );
};
