#include<stdio.h>
#include<string.h>
int main(){
	printf("MUHAMMAD HUZAIFA 22k-4337\n\n");
	int i, score=0,j, pass,passv, len , index;
	char table[5][6];
	int upper = 83, lower = 65;
	char inp[10];
	char replay;
	
	
	
	for(i = 0; i<5;i++){
		for(j=0;j<6;j++){
//			table[i][j] ="abcdefghijklmnopqrstuvxyz"[rand() % 2s6];
            table[i][j] = (rand()%(upper - lower + 1)+lower);
		}
	}
	table[4][0] = '4';
	table[4][1] = '3';
	table[4][2] = '3';
	table[4][3] = '7';
	for(i = 0; i<5;i++){
		for(j=0;j<6;j++){
//			table[i][j] = printf("%c\n","ABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 26]);
			printf("%c",table[i][j]);
		}
		printf("\n");}
	
do{
	int k;
	printf("Enter String to search ");
	scanf("%s", &inp);
	len =strlen(inp); // for inout  length
	for(i=0; i<5; i++){
		index = 1;
		for(j=0,k=0; j<6 && k<6; j++,k++){
			
//							printf("J:%d, i: %d and K:%d and index is %d",j,i,k,index);
			
			if(table[i][j] == inp[k]){
				index ++ ;				
			
				if(index == len){
					pass = 1;
					break;
				}
				else{
					continue;
				}
			}
			else 
			k =0;
		}
	}
	// verticle 
	if(pass == 0){
		
		index = 0;
		for(i=0; i<6; i++){
			index = 1;
			for(j=0,k=0; j<5 && k<5; j++,k++){
				
	//							printf("J:%d, i: %d and K:%d and index is %d",j,i,k,index);
				
				if(table[j][i] == inp[k]){
					index ++ ;				
				
					if(index == len){
						passv = 1;
						break;
					}
					else{
						continue;
					}
					
				}
				else 
				k =0;
			}
		}
	}

if(pass == 1 || passv == 1){
	printf("String is present ");
	score ++ ;
	printf("Score is %d",score);
}
if(pass == 0 && passv == 0){
	printf("string is not found");
	score--;
	printf("score is %d",score);
}
printf("\n press r to replay or press e to exit and repopulate :  ");
getche(replay);
printf("\n");

}while(replay == 'e');
for(i = 0; i<5;i++){
		for(j=0;j<6;j++){
//			table[i][j] ="abcdefghijklmnopqrstuvxyz"[rand() % 2s6];
            table[i][j] = (rand()%(upper - lower + 1)+lower);
		}
	}
	table[4][0] = '4';
	table[4][1] = '3';
	table[4][2] = '3';
	table[4][3] = '7';
	for(i = 0; i<5;i++){
		for(j=0;j<6;j++){
//			table[i][j] = printf("%c\n","ABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 26]);
			printf("%c",table[i][j]);
		}
		printf("\n");
	

}
exit(1);
}
