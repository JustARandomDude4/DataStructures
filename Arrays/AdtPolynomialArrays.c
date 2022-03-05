#include <stdio.h>
//contents :   accept || print || sum
typedef struct 
{
  float coef;
  int expo;
}polynomial;

void acceptTerms(polynomial P[],int n)   //Accepting each term of the polynomial :
{    
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d term's : \nCo-effecient: ",i);
        scanf("%f",&P[i].coef);
        printf("exponent :");
        scanf("%d",&P[i].expo);
    }
}

void PrintPolynomial(polynomial p3[],int res)
{   int k=0;
    printf("exponents\n");
	while(k < res)
	{
	        printf("%d\t",p3[k].expo);
		k++;
	}
	printf("\n");
	k=0;
	printf("Coeffecients\n");
	while(k < res)
	{
		printf("%d\t",p3[k].coef);
		k++;
	}
	printf("\n");
}

void Sum(polynomial p1[],polynomial p2[],polynomial p3[],int m,int n,int o)
{
    int i=0,j=0,k=0;


	while(i<m && j<n)
	{
		if(p1[i].expo== p2[j].expo)
		{
			p3[k].expo = p2[j].expo;
			p3[k].coef = p1[i].coef + p2[j].coef;
			i++; j++; k++;
		}
		else if(p1[i].expo < p2[j].expo)
		{
			p3[k].expo = p2[j].expo;
			p3[k].coef = p2[j].coef;
			j++; k++;
		}
		else
		{
			p3[k].expo = p1[i].expo;
			p3[k].coef = p1[i].coef;
			i++; k++;
		}
	}

    while(j < n)
	{
		p3[k].expo = p2[j].expo;
		p3[k].coef = p2[j].coef;
		j++;
		k++;
	}
	while(i < m)
	{
		p3[k].expo = p1[i].expo;
		p3[k].coef = p1[i].coef;
		i++;
		k++;
	}
	while(k < o)
	{
		p3[k].expo = 0;
		p3[k].coef = 0;
		k++;
	}
}
int main()
{   printf("Enter no of terms of the polynomial 1 :\n");
    int NoOfTerms1,NoOfTerms2,NoOfTerms3;
    scanf("%d",&NoOfTerms1);
    polynomial P1[NoOfTerms1];
    acceptTerms(P1,NoOfTerms1);        // Accepting Polynomial 1

    printf("Enter no of terms of the polynomial 2 :\n");
    scanf("%d",&NoOfTerms2);
    polynomial P2[NoOfTerms2];
    acceptTerms(P2,NoOfTerms2);     // Accepting Polynomial 2

    NoOfTerms3=NoOfTerms1+NoOfTerms2;
    
    polynomial P3[NoOfTerms3];
    Sum(P1,P2,P3,NoOfTerms1,NoOfTerms2,NoOfTerms3);

   PrintPolynomial(P3,NoOfTerms3);
    
    
    
return 0;
}
