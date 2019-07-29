#ifndef TCARD_h
#define TCARD_h
 

class TCard // 放在tcard.h 文件
{ // 私有成员变量
private:
	char type; //卡类型
	double money; //余额
	int line; //线路
	int start; //上车站号
	double max;
public:
	TCard( char ty );//构造函数（根据卡类型ty 做初始化）
	
	void getOn( int line, int number);//上车时，设置线路line和车站号number
	int getNum();//
	int getLine();//
	int getOff( char &ty, int &lineN, int &sta);//下车时，获得卡类型,上车线路和车站号
	double getMax();
	void setMax(int n);//
	//返回成功否：0表示无上车信息
	int deduct( double v );//扣款value元（<0为充值）
	double getmoney();
}; //返回成功否：0表示余额不足

#endif