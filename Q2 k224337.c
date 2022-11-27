#include<stdio.h>
#include <string.h>

int main() {
   char input[50] = {""};
    int k,count=0, pos=0;
   char str2[10][50] = {"\0"};
   int i=0,j=0;
   printf("22k4337 MMuhammad Huzaifa\n Enter string to encrypt: ");
   gets(input);
   // Extract the first token
   char * token = strtok(input, " ");
   // loop through the string to extract all other tokens
   while( token != NULL ) {
//      printf( " %s\n", token ); //printing each token
      strcpy(str2[i], token);
      i++;
      token = strtok(NULL, " ");
   }
   char output[10][50] = {""};

//   strcpy("")
   char temp;
   // first condtion for shifting to right
   
   int caps;
printf("Encrypted String: \n");
printf("22k4337");
   for(i=0; i<10; i++){
   	caps =0;
   	for(k=0; k<20; k++){   
   	if(str2[i][k]>='A' && str2[i][k]<= 'Z' ){
   		caps++;
	   }
   }
//   printf("C is %d",caps);
   	for(j =0; j<50; j++){
   		int len  =0;
		   len =strlen(str2[i]);
		  
 
		strcpy(str2[i],strlwr(str2[i]));
   		if(str2[i][0] == 'a' || str2[i][0] == 'e' || str2[i][0] == 'i' || str2[i][0] == 'o' || str2[i][0] == 'u' ){
			
				
			strcpy(output[i], str2[i]);
			strcat(output[i], "way");
			
			continue;
		}

		else if(str2[i][j] == 'a' || str2[i][j] == 'e' || str2[i][j] == 'i' || str2[i][j] == 'o' || str2[i][j] == 'u' ){
	char arr1[50];
	strcpy(arr1, str2[i])	;
	char temp;
	int len = strlen(arr1);
	int i,j;
//	printf("%d",len);
//		for(j=0; j<2; j++){
	for(j=0; j<2; j++){
		temp = arr1[len-1];

	for(i =len-1 ; i>0; i--){
		arr1[i] = arr1[i-1];
		
		
		}
		arr1[0] = temp;
		}
		strcat(arr1,"ay");
		
		printf("%s ",arr1);

		
			}
   
		}

	}
	printf("%s ",output);	
}
