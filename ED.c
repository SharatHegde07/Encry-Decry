//#############################################################################################################################//
//Programme to perform Encryption and Decryption
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void encrypt(char [],int);
void decrypt(char [],int);
void encrypt(char s[],int m)
{
	int i;
	int str1[100];
	char str2[100];
	for(i=0;i<strlen(s);i++)
	{
		str1[i]=s[i];
		str1[i]^=m;	
	}
	for(i=0;i<strlen(s);i++)
	{
		str2[i]=str1[i];
	}
	printf("\nYour Encrypted Message is: %s",str2);
}
void decrypt(char s[],int m)
{
	int i;
	int str1[100];
	char str2[100];
	for(i=0;i<strlen(s);i++)
	{
		str1[i]=s[i];
		str1[i]^=m;
	}
	for(i=0;i<strlen(s);i++)
	{
		str2[i]=str1[i];
		
	}
	printf("\nYour Decrypted Message is: %s",str2);
}

int main()
{
	char str[100];
	int c,m;
	printf("Enter Your Message");
	scanf("%[^\n]",str);
	printf("\nEnter The Master Key(Only Numbers Are Allowed!!)");
	scanf("%d",&m);
	printf("\nChoose Your Option");
	choice:printf("\n1).Encrypt The Message\n2).Decrypt The Message");
	scanf(" %d",&c);
	switch(c)
	{
	case 1:
		printf("\nWorking.....");
		encrypt(str,m);
		break;
	
	case 2:
	
		printf("\nWorking....");
		decrypt(str,m);
		break;
	
	default:
		printf("\nLearn to Choose");
		goto choice;
	}
}

