#include<stdio.h>
void main(){
	//Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.
	float price;
	float dis;
	char stud;
	printf("Enter price and user info ");
	scanf("%f,%c",&price,&stud);
	
	if(stud=='y'){
		if(price>500){
			dis=price*0.2f;
		}
		else{
			dis = price*0.1f;
		}
	}
	else if(price>600){
		dis=price* 0.15f;
	}
	else{
		dis = 0;
	}
	printf("Given discount = %0.2f\n",dis);
	printf("Total price after discount is %0.2f ",price-dis);
}