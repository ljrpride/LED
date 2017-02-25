/******************** 尚学科技 **************************
 * 实验平台：开拓者STM32开发板
 * 库版本  ：ST3.5.0
 * 作者    ：尚学科技团队 
 * 淘宝    ：http://shop102218275.taobao.com/
 * 本程序只供学习使用，未经作者许可，不得用于其它任何用途
 *版权所有，盗版必究。
**********************************************************************************/
#include "stm32f10x.h"
#include "usart1.h"
#include "LED.h"
#include "delay.h"
#include "stdio.h"


/*
 * 函数名：main
 * 描述  ：主函数
 * 输入  ：无
 * 输出  ：无
 */
int main(void)
{	
  

  USART1_Config();
	
	



	while(1)
	{
		printf("\r\n this is a printf demo \r\n");
   	printf("\r\n 欢迎使用开拓者STM32开发板\r\n");
		Delay(0x02FFFF);
		Delay(0x02FFFF);
		
  }
}