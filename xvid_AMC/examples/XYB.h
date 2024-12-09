#include <stdio.h>
////================ 下面是我们添加的全局参数接收变量 ==============

	 extern volatile  unsigned char MesDump[1000];	//读取秘密信息所使用的缓存

	 extern volatile  FILE* Mfp;								//秘密信息文件指针
	 extern volatile  int KEY;									//嵌入密钥
	 extern volatile  int MesByteMark;				//秘密信息文件字节下标
	 extern volatile  int MesBitMark;					//秘密信息单个字节中 bit 下标
	 extern volatile  int iRet;									//返回值变量
	 extern volatile  int iMesLen;							//秘密信息文件字节数
	 //volatile  char *ARG_MESFILE;		//需要嵌入的秘密信息文件名称
//	static float ARG_RATE=1;			//嵌入的相对嵌入率
//
////=========================================================