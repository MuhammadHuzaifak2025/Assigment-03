#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void display_userdef_func(char func_name[25]){
	printf("Name: Muhammad Huzaifa, id: 22k-4337, and User defined function called is: %s\n",func_name);

}
#define n 337
struct Students{
	char student_id[20];
	char name[50];
	float mid1;
	float mid2;
	float final;
	float assigment;
	float quiz;
	float GPA;
}student[n];
//
//	int search(){ // Evaluation of an array
//	int i,pass;
//	char id[7];
//	printf("Enter Id: ");
//		scanf("%s",&id);		 
//	for(i=0; i<n; i++){
//		if(strcmp(student[i].student_id,id)== 0){
//			printf("The user Already Exsist");
//			pass = 0;
//				
//		}
//}
void smart_Find(void){
	int i;
	printf("Enter Id to search");
	char id[15];
	scanf("%s",id);
	for( i =0; i<n;i++){
		if(strcmp(id,student[i].student_id)==0){
			printf("Name: %s\n", student[i].name);
			printf("Mid 1 marks: %f\n", student[i].mid1);
			printf("Mid 2 marks: %f\n", student[i].mid2);
			printf("Quiz marks: %f\n", student[i].quiz);
			printf("Assigment marks: %f\n", student[i].assigment);
			printf("Final marks: %f\n", student[i].final);
			printf("GPA: %f\n", student[i].GPA);


			break;
		}
	}
		
			printf("NOT FOUND\n");
		
	}


int search(char id [7], int j){
	int i, pass;
	for(i =0; i<n;i++){
		if(strcmp(id,student[i].student_id)!=0){
			pass = 1;
			strcpy(student[j].student_id,id);
			break;
		}
		else{
		pass =0;
		printf("User already exsist\n");
		break;
			}
	}
	return pass;
	
}// End of search searches if any id is already entered.

int check(int i){
	float sum;
	sum = student[i].assigment + student[i].final + student[i].mid1 + student[i].mid2 + student[i].quiz;
	if(sum > 100){ // return o on true
	return 1;}
}

void getGpa(void){
	char  id[15];
	int i;
	for(i = 0; i<n;i++){
		retake:	

		printf("Enter User id: ");
		scanf("%s",id);
		if(search(id, i)==1){
			printf("Enter User name: ");
			scanf("%s",student[i].name);
				retakemarks:
			printf("Enter Mid 1 weightage of %s: ",student[i].name);
			scanf("%f",&student[i].mid1);
			printf("Enter Mid 2 weightage of %s: ",student[i].name);
			scanf("%f",& student[i].mid2);
			printf("Enter Quiz weightage of %s: ",student[i].name);
			scanf("%f",&student[i].quiz);
			printf("Enter Assigment weightage of %s: ",student[i].name);
			scanf("%f",&student[i].assigment);	
			printf("Enter Finals weightage of %s: ",student[i].name);
			scanf("%f",&student[i].final);
				if(check(i) == 1){
				display_userdef_func("check");
				printf("Entered Marks cannot exceed 100, re-enter marks\n");
				goto retakemarks;
			}
		
	}
		else{
			display_userdef_func("search");
			goto retake;
		}
			
			char breaks;
			printf("Do you want to continue(y/n)\n");
			scanf("%s",&breaks);
			if(breaks == 'n'){
				printf("n");
			break;
			
		}
	}		
}

void calGpa(void){
	int i;
		for(i=0; i<n; i++){
			float sum;
			char grade[3];
			sum = student[i].assigment + student[i].final + student[i].mid1 + student[i].mid2 + student[i].quiz;
			if(sum>=90){
					strcpy(grade, "A+");
					student[i].GPA = 4;
					
					}
			else if(sum>=86 && sum<=89){
					strcpy(grade, "A");
					student[i].GPA = 4;
				
					}
			else if(sum>=82 && sum<=85){
					strcpy(grade, "A-");
					student[i].GPA = 3.67;
				
					}
			else if(sum>=78 && sum<=81){ 
					strcpy(grade, "B+");
					student[i].GPA = 3.33;
			
					}
			else if(sum>=74 && sum<=77){
					strcpy(grade, "B-");
					student[i].GPA = 3;
			
					}
			else if(sum>=70 && sum<=73){
					strcpy(grade, "B-");
					student[i].GPA = 2.67;
			
					}
			else if(sum>=66 && sum<=69){
					strcpy(grade, "C+");
					student[i].GPA = 2.33;
			
					}			
			else if(sum>=62 && sum<=65){
					strcpy(grade, "C-");
					student[i].GPA = 2;
			
					}
			else if(sum>=58 && sum<=61){
					strcpy(grade, "C-");
					student[i].GPA = 1.67;
			
					}
			else if(sum>=54 && sum<=57){
					strcpy(grade, "D+");
					student[i].GPA = 1.33;
			
					}		
			else if(sum>=50 && sum<=53){
					strcpy(grade, "D+");
					student[i].GPA = 1;
			
					}	
			else if(sum<=49 && sum>0){
					strcpy(grade, "D");
					student[i].GPA = 0.5;
			
					}
		}
	}
	void print_table(){
		int i;
		printf("ID\t\tNAME\t\tGPA");
		for( i=0; i<n; i++){
			printf("\n%s\t\t",student[i].student_id);
			printf("%s\t\t",student[i].name);
			printf("%f\n",student[i].GPA);
		}
		
	}
	void replace(int i){
		char id[15];
		
		printf("Enter User id: ");
		scanf("%s",id);
			printf("Enter User name: ");
			scanf("%s",student[i].name);
				retakemarks:
			printf("Enter Mid 1 weightage of %s: ",student[i].name);
			scanf("%f",&student[i].mid1);
			printf("Enter Mid 2 weightage of %s: ",student[i].name);
			scanf("%f",& student[i].mid2);
			printf("Enter Quiz weightage of %s: ",student[i].name);
			scanf("%f",&student[i].quiz);
			printf("Enter Assigment weightage of %s: ",student[i].name);
			scanf("%f",&student[i].assigment);	
			printf("Enter Finals weightage of %s: ",student[i].name);
			scanf("%f",&student[i].final);	
			if(check(i) == 1){
				display_userdef_func("check");
				printf("Entered Marks cannot exceed 100, re-enter marks\n");
				goto retakemarks;
			}
		
		
		
		}
			
	int count(){
		int count = n;
		return count;
	}
	
	int avg_mid1(){
		int i;
		float mid_total=0;
		for(i=0; i<n; i++){
		mid_total += mid_total+student[i].mid1;
	}
	float avg = mid_total/count();
	printf("The avg of the mid1 is: %f\n", avg);
	return avg;
	}
	
	
	int avg_mid2(){
		float mid_total=0;
		int i;
		for(i=0; i<n; i++){
		mid_total += mid_total+student[i].mid2;
	}
	float avg = mid_total/count();
	printf("The avg of the mid2 is: %f\n", avg);
	return avg;
		
	}
	
	
		avg_final(){
			float mid_total=0;
		int i;
		for(i=0; i<n; i++){
		mid_total += mid_total+student[i].final;
	}
	float avg = mid_total/count();
	printf("The avg of the Final is: %f\n", avg);
	return avg;
		
	}
	
		avg_total(){
		float sum= 0;
		float avg= 0;
		int i;
		for(i=0; i<n; i++){
			sum = sum + student[i].assigment + student[i].final + student[i].mid1 + student[i].mid2 + student[i].quiz;
			
			}
		avg = sum/count();
		printf("THE avg of total student is: %f\n",avg);
		return avg;
		}
	
	max(){
		int sum=0, max_i =0;
		float max=0;
		int i;
		for(i=0; i<count(); i++){
			sum = student[i].assigment + student[i].final + student[i].mid1 + student[i].mid2 + student[i].quiz;
			if(sum>max){
				max =sum;
				max_i =i;
				
			}
			}
			 
			printf("The Max is %f of %s\n",max, student[max_i].name);
	}
	fail(){
			calGpa();
			int i;
			for(i=0; i<n;i++){
				if(student[i].GPA < 2){
					printf("The student failed are %s\n",student[i].name);
				}
			}
	}
void statistics(void){
	
	printf("The Number of people is %d", count());
	
	avg_mid1();
	avg_mid2();
	avg_final();
	avg_total();
	max();
	fail();
}
		
int main(){
	printf("MUHAMMAD HUZAIFA 22k4337\n");
	char options;
	calGpa();
	re_teks:
	printf(" Enter g to get and evaluate GPA \n Enter a for printing GPA \n Enter r for replacing at seven index \n Enter f for finding detail of student \n Enter s for printing statistics of class and \n Enter e to exit\n");
	printf("Select: ");
	scanf("%s",& options);
	int x;
	switch (options){
		case 'g':
		display_userdef_func("STUDENTS");
		printf("Populate student datails\n");
		getGpa();
		break;
		
		case 'a':
		calGpa();
		print_table();
		break;
		
		case 'e':
			printf("Exiting Program");
			
			exit(1);
		case 'f':
			calGpa();
			smart_Find();
			break;
		case 'r':
			replace(6);
			break;
		case 's':
			statistics();
			break;
		default:
		printf("Invalid option opted Re enter: \n\n");
		break;
			
	}
	goto re_teks;

}
