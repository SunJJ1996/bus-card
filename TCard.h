#ifndef TCARD_h
#define TCARD_h
 

class TCard // ����tcard.h �ļ�
{ // ˽�г�Ա����
private:
	char type; //������
	double money; //���
	int line; //��·
	int start; //�ϳ�վ��
	double max;
public:
	TCard( char ty );//���캯�������ݿ�����ty ����ʼ����
	
	void getOn( int line, int number);//�ϳ�ʱ��������·line�ͳ�վ��number
	int getNum();//
	int getLine();//
	int getOff( char &ty, int &lineN, int &sta);//�³�ʱ����ÿ�����,�ϳ���·�ͳ�վ��
	double getMax();
	void setMax(int n);//
	//���سɹ���0��ʾ���ϳ���Ϣ
	int deduct( double v );//�ۿ�valueԪ��<0Ϊ��ֵ��
	double getmoney();
}; //���سɹ���0��ʾ����

#endif