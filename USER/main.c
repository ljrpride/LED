/******************** ��ѧ�Ƽ� **************************
 * ʵ��ƽ̨��������STM32������
 * ��汾  ��ST3.5.0
 * ����    ����ѧ�Ƽ��Ŷ� 
 * �Ա�    ��http://shop102218275.taobao.com/
 * ������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
 *��Ȩ���У�����ؾ���
**********************************************************************************/
#include "stm32f10x.h"
#include "usart1.h"
#include "LED.h"
#include "delay.h"
#include "stdio.h"


/*
 * ��������main
 * ����  ��������
 * ����  ����
 * ���  ����
 */
int main(void)
{	
  

  USART1_Config();
	
	



	while(1)
	{
		printf("\r\n this is a printf demo \r\n");
   	printf("\r\n ��ӭʹ�ÿ�����STM32������\r\n");
		Delay(0x02FFFF);
		Delay(0x02FFFF);
		
  }
}