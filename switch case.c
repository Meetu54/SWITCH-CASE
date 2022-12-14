#include<stdio.h>
main(){
	
	
	char a;
	
	printf("INFO ABOUT INPUT\n\n");
	printf("J= January, F= February, M= March, A= April, M= May, u= June, j= July, A= August, S= September, O= October, N= November, D= December\n\n");
	
	printf("ENTER THE INPUT : ");
	scanf("%c",&a);
	
	switch(a)
	
	{
		
		default:
		printf("Invalid Input");	
		break;
		
		case 'J':
		printf("January");	
		break;
		
		case 'F':
			
		printf("February");	
		break;
		
		case 'M':
			
		printf("March");	
		break;
		
		case 'A':
			
		printf("April");	
		break;
		
		case 'm':		
		printf("May");	
		break;
		
		case 'U':
			
		printf("June");	
		break;
		
		case 'j':
			
		printf("July");	
		break;
		
		case 'a':
			
		printf("August");	
		break;
		
		case 'S':
			
		printf("September");	
		break;
		
		case 'O':
			
		printf("October");	
		break;
		
		case 'N':
			
		printf("November");	
		break;
		
		case 'D':
			
		printf("December");	
		break;
		
	}
	
	
}
