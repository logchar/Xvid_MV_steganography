#include <stdio.h>
////================ ������������ӵ�ȫ�ֲ������ձ��� ==============

	 extern volatile  unsigned char MesDump[1000];	//��ȡ������Ϣ��ʹ�õĻ���

	 extern volatile  FILE* Mfp;								//������Ϣ�ļ�ָ��
	 extern volatile  int KEY;									//Ƕ����Կ
	 extern volatile  int MesByteMark;				//������Ϣ�ļ��ֽ��±�
	 extern volatile  int MesBitMark;					//������Ϣ�����ֽ��� bit �±�
	 extern volatile  int iRet;									//����ֵ����
	 extern volatile  int iMesLen;							//������Ϣ�ļ��ֽ���
	 //volatile  char *ARG_MESFILE;		//��ҪǶ���������Ϣ�ļ�����
//	static float ARG_RATE=1;			//Ƕ������Ƕ����
//
////=========================================================