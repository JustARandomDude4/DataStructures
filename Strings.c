#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>      // for the isdigit() func
// #define clrscr(); system("cls");   //to clear console

//write a program to reverse  a line

int main()
{ /*  
    char *p1;
    char s1[100];
    printf("enter the string\n");
    scanf("%s",s1);                   //no need of an & or *   //with this I can only take one word
  //  scanf("%[^\n]s",s1)                                        //with this I CAN TAKE MANY WORDS
    p1=s1;                          //pointer to a string
    printf("%s\n",p1); 
    char *p2="Hello y'all I am Satwika\n";     
    char *p3;
    printf("Enter your string :");
    // scanf("%as",&p3);  //supposed to work, but is not
    //scanf("%s",p3);                 //this is wrong as the pointer is uninitialised.so first allocate memory to what the  pointer is pointing ot
    p3=(char*)malloc(sizeof(char)*100);           //allocating memory
    
    scanf("%100s",p3);        //taking only one word tho

   // fgets(p3,100,stdin);     //supposed to work but isnt
    printf("\n%s",p2);
    printf("%s\n",p3);
    free(p3);

    //trying out string functions from string.h module

    char *p4="Hello janal I am satwi";
    char p5[100]="satwi is great"; //type1
//   char p5[3]={'l','b','c'};  // type2

    printf("Length of p4 is :%d \n",strlen(p4));
    printf("reverse of p5 is :%s \n",strrev(p5));   //only works with p5(both types)

    printf("lower case  of p5 is :%s \n",strlwr(p5));   //only works with p5
    printf(" p4-p5 is %d \n",strcmp(p5,p4));
    printf("concatenation of p5 is :%s \n",strcat(p5,p4));   //only works with p5


  // Reversing a string  completly

    char p6[100]="Satwika is a good girl";
    printf("Reverse of p6 is: %s \n",strrev(p6));

    // Reversing a string word by word
    for (int i = strlen(p6) - 1; i >= 0; i--)  //traversers from back
    {   
        if(p6[i] == ' ')     //once it finds space,
         {   
            p6[i] = '\0';    //replaces space with null as for ext itme during raversal it printss till null
            printf("%s ", &(p6[i]) +1 );  //and prints the string after null
         }
    }
    printf("%s", p6);*/

    void deletePos(char a[],int pos,int len)
    {
        for(int i=pos;i<=len;i++)
        {
            a[i]=a[i+1];
        }
    }

    // Removing numbers from the charecter array

    char p7[100]="Satwi 143 Amma";
    int len=strlen(p7);
    for(int i=0;i<len;i++)
    {
        if(isdigit(p7[i]))
        {   printf("%c",p7[i]);
            deletePos(p7,i,len); i--;
        }
    }

    printf("\nThe elements of the array after removing zeroes are: \n");
        for (int i = 0; i < len ; ++i) {printf("%c", p7[i]);}

    
    return 0;
    
}

