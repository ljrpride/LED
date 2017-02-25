/******************** ��ѧ�Ƽ� **************************
 * ʵ��ƽ̨��������STM32������
 * ��汾  ��ST3.5.0
 * ����    ����ѧ�Ƽ��Ŷ� 
 * �Ա�    ��http://shop102218275.taobao.com/
 * ������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
 *��Ȩ���У�����ؾ���
**********************************************************************************/
#include "LED.h"

/*
 * ��������LED_GPIO_Config
 * ����  ������LED�õ���I/O��
 * ����  ����
 * ���  ����
 */
void LED_GPIO_Config(void)
{		
	/*����һ��GPIO_InitTypeDef���͵Ľṹ��*/
	 GPIO_InitTypeDef GPIO_InitStructure;

	/*����GPIOC������ʱ��*/
	 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

	/*ѡ��Ҫ���Ƶ�GPIOC����*/															   
     GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;	

	/*��������ģʽΪͨ���������*/
  	 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   

	/*������������Ϊ50MHz */   
  	 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 

	/*���ÿ⺯������ʼ��GPIOC*/
     GPIO_Init(GPIOA, &GPIO_InitStructure);
	 
    /*PA.8 �����*/
     GPIO_SetBits(GPIOA,GPIO_Pin_8);   
	
	
	 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);   

	 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;	    		 
	 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		
	 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 
	 GPIO_Init(GPIOD, &GPIO_InitStructure);	
	 GPIO_SetBits(GPIOD,GPIO_Pin_2); 						 

	 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);   

	 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;	    		 
	 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 
	 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 
	 GPIO_Init(GPIOC, &GPIO_InitStructure);	
	 GPIO_SetBits(GPIOC,GPIO_Pin_12); 	


}


