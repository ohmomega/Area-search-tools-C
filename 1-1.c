#include <stdio.h>

void menu(){
	
		printf("**** Main Menu Program to calculate geometric area **** \n");
        printf("1. Triangle\n");
        printf("2. Rectangle\n");
        printf("3. Circle\n");
        printf("4. Exit\n");
        printf("----------------------\n");
}

float triangleArea(float b,float h){
	float area;
	area = 0.5 * b * h;
	printf("-------- Answer --------\n");
	printf("The area of the triangle is %.2f square units.\n", area);
	printf("----------------------\n");
}

int rectangleArea(int w , int l){
	int area;
	area = w * l;
	printf("-------- Answer --------\n");
	printf("The area of the rectangle is %d square units.\n", area);
	printf("----------------------\n");
}
int circleArea(float r){
float area;
  area = 3.14 * 3.14 * r;
  printf("-------- Answer --------\n");
  printf("The area of the rectangle is %.2f square units.\n", area);
  printf("----------------------\n");
}

main() {
	
	int choice;
	
	while (1)
    {
    	menu();
    	printf("Please enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 1 ){
        	printf("----------------------\n");
        	printf("Welcome to calculate Triangle \n");
        	float base , height ;
        	printf("Please enter a base value: ");
        	scanf("%f",&base);
        	printf("Please enter a height value: ");
        	scanf("%f",&height);
        	triangleArea(base,height);
		}
		else if (choice == 2){
			printf("----------------------\n");
        	printf("Welcome to calculate Rectangle \n");
        	int width ,length ;
        	printf("Please enter a width value: ");
        	scanf("%d",&width);
        	printf("Please enter a length value: ");
        	scanf("%d",&length);
        	rectangleArea(width , length);
		}
		else if (choice == 3){
          printf("----------------------\n");
          printf("Welcome to calculate Circle \n");
          float r ;
          printf("Please enter a r value: ");
          scanf("%f",&r);
            circleArea(r);
		}
		else if(choice == 4){
			printf("Thank you ");
        	return 0;
		}
		else {
			printf("Please enter your choice 1 - 4 !!!! \n");
		}
        
        
        
        
        
	}	
}