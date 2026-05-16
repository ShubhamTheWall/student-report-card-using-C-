#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int subNo , idNo , rScore = 0 , wScore = 0  ,pyMark = 0 , cMark = 0 , jaMark = 0 , totalMark = 0;
	char course[50] , name[50] ,option ,colName[50]  ;
	int keepRunning = 1;  // Control variable for loop 
	
	// This is the intro part :- 
	
	printf(" \t\t\t\t Welcome To Quiz !! \t\t\t\t\n\n");
	printf("\t\t\t     Login Page for The Student \t\t\t \n\n");
	
	printf("Enter You Name : ");
	fgets(name,sizeof(name),stdin);
	
	printf("\nEnter Your Collage name : ");
	scanf(" %c", &colName);
	
	while(getchar() != '\n');
	
	printf("\nEnter you Id : ");
	scanf("%d", &idNo);
	
	while(getchar() != '\n');
	
	printf("\nEnter Your Course Here : ");
	scanf(" %c", &course);
	
	// Main menu 
do {
	rScore = 0;
	printf("\n\nChoose Which Subject you want to Give Test : ");
	printf("Subject \n\n 1. Python \n 2. C language \n 3. Java  \n\n");
	printf("Enter the number here according to the subject : ");
	while(getchar() != '\n');
	scanf("%d",&subNo);
	
	if (subNo == 0){
		keepRunning = 0;
		printf("\nExiting... Thank You Come agin !! ");
		break;
	}
	
	// Switch statement 
	
	switch(subNo){
		case 1:
			printf("\n\n    WELCOME TO THE PYTHON PROGRAMMING MCQ TEST  \n ");
			printf("\nQ1.Which Keyword is use to create a function in python ?");
			printf("\n\nA. func \nB. define \nC. def \nD. function\n\n");
			printf("Enter you option Here : ");
			scanf(" %c", &option); 
			
			if (toupper(option) == 'A'){
				printf("\nRight Answer\n");
				rScore++;
		    }else{
				printf("Wrong Answer");
				wScore++;
			}
			 
			printf("\nQ2.How do you start a comment in Python ?");
			printf("\n\nA. // \nB. # \nC. /* \nD. --");
			printf("\n\nEnter Your Option Here : ");
			scanf(" %c", &option);
			
			if(toupper(option) == 'B'){
				printf("\nRight Answer\n");
				rScore++;	
			}else{
				printf("Wrong Answer");
				wScore++;
			}
			 
			printf("\nQ3.Which Data Type is used to store multiple items in a single Variable ? ");
			printf("\n\nA. list \nB. tuple \nC.set \nD.dictionary ");
			printf("\n\nEnter your option here : ");
			scanf(" %c", &option);
			
			if(toupper(option) == 'C' ){
				printf("\nRight Answer\n");
				rScore++;
			}else{
				printf("Wrong Answer");
			    wScore++;
			}
			
			printf("\nQ4.What is the correct file extension for python ? ");
			printf("\n\nA. .pt \nB. .pyt \nC .py \nD ,pyc ");
			printf("\n\nEnter Your Option Here : ");
			scanf(" %c", &option);
			
			if(toupper(option) == 'D'){
				printf("\nRight Answer\n");
				rScore++;
			}else{
				printf("Wrong Answer");
				wScore++;
			}
			
			printf("\nQ5.Which Fucntion is used to get user input in Python 3 ? ");
			printf("\n\nA. get() \nB. scan() \nC. input() \nD. read() ");
			printf("\n\nEnter Your Option Here : ");
			scanf(" %c", &option);
			
			if (toupper(option) == 'A'){
				printf("\nRight Answer\n");
				rScore++;
			}else{
				printf("\nWrong Answer");
				wScore++;
			}
			
		    pyMark = rScore * 10 ;
		    printf("\n\nTotal Question : 5 ");
		    printf("\nTotal marks : 50 ");
		    printf("\nTotal marks You obtained : %d ", pyMark);
			
	        break ;
	        
	    case 2:
	    	rScore = 0;
			printf("\n\n    WELCOME TO THE C PROGRAMMING MCQ TEST  \n ");
			printf("\nQ1.Which data type is used to store a single character in c ?");
			printf("\n\nA. int \nB. float \nC. char \nD. double\n\n");
			printf("Enter you option Here : ");
			scanf(" %c", &option); 
			
			if (toupper(option) == 'A'){
				printf("\nRight Answer\n");
				rScore++;
		    }else{
				printf("Wrong Answer");
				wScore++;
			}
			 
			printf("\nQ2.What is the correct way to start a main function ?");
			printf("\n\nA. int main() \nB. start main() \nC. progra,() \nD. main()");
			printf("\n\nEnter Your Option Here : ");
			scanf(" %c", &option);
			
			if(toupper(option) == 'B'){
				printf("\nRight Answer\n");
				rScore++;	
			}else{
				printf("Wrong Answer");
				wScore++;
			}
			 
			printf("\nQ3.Which Operator is used to find the rmainder of a division ? ");
			printf("\n\nA. / \nB. % \nC. # \nD. $ ");
			printf("\n\nEnter your option here : ");
			scanf(" %c", &option);
			
			if(toupper(option) == 'C' ){
				printf("\nRight Answer\n");
				rScore++;
			}else{
				printf("Wrong Answer");
			    wScore++;
			}
			
			printf("\nQ4.How do you inset a newline in a printf string ? ");
			printf("\n\nA.( \\n ) \nB. ( \\t ) \nC ( \\l ) \nD. ( \\p ) ");
			printf("\n\nEnter Your Option Here : ");
			scanf(" %c", &option);
			
			if(toupper(option) == 'D'){
				printf("\nRight Answer\n");
				rScore++;
			}else{
				printf("Wrong Answer");
				wScore++;
			}
			
			printf("\nQ5.Which header file is needed for printf() and scanf() ? ");
			printf("\n\nA. conio.h \nB. stdlib.h \nC. strng.h \nD. stdio.h ");
			printf("\n\nEnter Your Option Here : ");
			scanf(" %c", &option);
			
			if (toupper(option) == 'A'){
				printf("\nRight Answer\n");
				rScore++;
			}else{
				printf("Wrong Answer");
				wScore++;
			}
			
		    cMark = rScore * 10 ;
		    printf("\nTotal Question : 5 ");
		    printf("\nTotal marks : 50 ");
		    printf("\nTotal marks You obtained : %d ", cMark);
			
			break;
    case 3:
	    	rScore = 0;
			printf("\n\n    WELCOME TO THE JAVA PROGRAMMING MCQ TEST  \n ");
			printf("\nQ1.Which if these is the correct way to print to the console in java ?");
			printf("\n\nA. print() \nB. console.log() \nC. system.out,println() \nD. echo()\n\n");
			printf("Enter you option Here : ");
			scanf(" %c", &option); 
			
			if (toupper(option) == 'A'){
				printf("\nRight Answer\n");
				rScore++;
		    }else{
				printf("Wrong Answer");
				wScore++;
			}
			 
			printf("\nQ2.What is the correct way to start a main function ?");
			printf("\n\nA. int main() \nB. start main() \nC. progra,() \nD. main()");
			printf("\n\nEnter Your Option Here : ");
			scanf(" %c", &option);
			
			if(toupper(option) == 'B'){
				printf("\nRight Answer\n");
				rScore++;	
			}else{
				printf("Wrong Answer");
				wScore++;
			}
			 
			printf("\nQ3.What is the entry point for every java application ? ");
			printf("\n\nA. start() \nB. main() \nC. init() \nD. run() ");
			printf("\n\nEnter your option here : ");
			scanf(" %c", &option);
			
			if(toupper(option) == 'C' ){
				printf("\nRight Answer\n");
				rScore++;
			}else{
				printf("Wrong Answer");
			    wScore++;
			}
			
			printf("\nQ4.Which keyword is used to inherit a class in java ? ");
			printf("\n\nA. implements \nB. extends \nC inherits \nD. uses ");
			printf("\n\nEnter Your Option Here : ");
			scanf(" %c", &option);
			
			if(toupper(option) == 'D'){
				printf("\nRight Answer\n");
				rScore++;
			}else{
				printf("Wrong Answer");
				wScore++;
			}
			
			printf("\nQ5.Which data type is used to store a true or false values ? ");
			printf("\n\nA. bool \nB. bit \nC. boolean \nD. logic ");
			printf("\n\nEnter Your Option Here : ");
			scanf(" %c", &option);
			
			if (toupper(option) == 'A'){
				printf("\nRight Answer\n");
				rScore++;
			}else{
				printf("Wrong Answer");
				wScore++;
			}
			
		    jaMark = rScore * 10 ;
		    printf("\nTotal Question : 5 ");
		    printf("\nTotal marks : 50 ");
		    printf("\nTotal marks You obtained : %d ", jaMark);
		    
	
    }
    if (keepRunning){
        printf("\nWould you like to try another subject? (1 for Yes / 0 for No): ");	
    	int cont;
    	scanf("%d", &cont);
    	if (cont == 0) keepRunning = 0;
    }
	}while (keepRunning);
	
	// --- FINAL REPORT CARD SECTION ---
    printf("\n\n===============================================");
    printf("\n              STUDENT REPORT CARD              ");
    printf("\n===============================================");
    printf("\nName: Shubham Kumar            ID: %d", idNo);
    printf("\nCollege:  CIMAGE COLLAGE           Course:  BCA ");
    printf("\n-----------------------------------------------");
    printf("\nSubject        Total Qs    Marks Obtained");
    printf("\n Python            5            %d" , pyMark);
    printf("\n C lang            5            %d", cMark);
    printf("\n Java              5            %d", jaMark);
    totalMark = pyMark + cMark + jaMark ;
    printf("\nTotal Marks                     %d", totalMark);
    
	
	return 0;
}
