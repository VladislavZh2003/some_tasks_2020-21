#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int CheckForWrongWrite(char str[],int size);

int main()
{
	char strCh[100];
	cin.get(strCh,100);
	//cout<<strCh<<endl;
	int lenStr = (unsigned)strlen(strCh);
	
	cout<<CheckForWrongWrite(strCh,lenStr)<<endl;
}

int CheckForWrongWrite(char str[], int size)
{
	
	int trueCounter = 0;
	int mediumCounter = 0;
	int falseCounter = 0;
	
	int x = 0;
	
	for(int i = 0; i<size; i++)
	{
		if(str[i] == '.')
		{
			x = 0;
			mediumCounter++;
			for(int j = 1; j<size+1; j++)
			{
				if(str[i+j] != ' ')
				{
					for(x; x<27; x++)
					{
						if(str[i+j] == (char)65+x)
						{
							trueCounter++;
						}
					}		
				}
				if(x!=0)
				break;
			}
		}
	}
	falseCounter += mediumCounter - trueCounter;
	
	
	char kogato[] = "kogato";
	char kadeto[] = "kadeto";
	char kato[] = "kato";
	char kakvoto[] = "kakvoto";
	char koito[] = "koito";
	char chiito[] = "chiito";
	char che[] = "che";
	
	char str2[100];
	strcpy (str2,str);
	int size2 = size;
	int i = 0;
	
	mediumCounter = 0;
	trueCounter = 0;
	
	char *output = NULL;
	output = strstr (str2,kogato);
	
	while(output)
	{
		mediumCounter++;
		
		for(int j = strlen(str2) - strlen(output)-1; j>=0; j--)
		{
			
			if(str2[j] == '^')
			break;
			if(str2[j] != ' ')
			{
				if(str2[j] == ',')
				{
				trueCounter++;
				break;
				}
				else
				break;	
			}
		}
		i = 0;
		for(i; i< size2; i++)
		{
			size2 = strlen(str2) - strlen(output) + strlen(kogato);
			str2[i] = '^';
		}
		output = strstr (str2,kogato);
	}
	falseCounter += mediumCounter - trueCounter;
	
	strcpy (str2,str);
	size2 = size;
	i = 0;
	
	mediumCounter = 0;
	trueCounter = 0;
	
	output = strstr (str2,kadeto);
	
	while(output)
	{
		mediumCounter++;
		
		for(int j = strlen(str2) - strlen(output)-1; j>=0; j--)
		{
			if(str2[j] == '^')
			break;
			if(str2[j] != ' ')
			{
				if(str2[j] == ',')
				{
				trueCounter++;
				break;
				}
				else
				break;	
			}
		}
		i = 0;
		for(i; i< size2; i++)
		{
			size2 = strlen(str2) - strlen(output) + strlen(kadeto);
			str2[i] = '^';
		}
		output = strstr (str2,kadeto);
	}
	falseCounter += mediumCounter - trueCounter;
	
	strcpy (str2,str);
	size2 = size;
	i = 0;
	
	mediumCounter = 0;
	trueCounter = 0;
	
	output = strstr (str2,kato);
	
	while(output)
	{
		mediumCounter++;
		
		for(int j = strlen(str2) - strlen(output)-1; j>=0; j--)
		{
			if(str2[j] == '^')
			break;
			if(str2[j] != ' ')
			{
				if(str2[j] == ',')
				{
				trueCounter++;
				break;
				}
				else
				break;	
			}
		}
		i = 0;
		for(i; i< size2; i++)
		{
			size2 = strlen(str2) - strlen(output) + strlen(kato);
			str2[i] = '^';
		}
		output = strstr (str2,kato);
	}
	falseCounter += mediumCounter - trueCounter;
	
	strcpy (str2,str);
	size2 = size;
	i = 0;
	
	mediumCounter = 0;
	trueCounter = 0;
	
	output = strstr (str2,kakvoto);
	
	while(output)
	{
		mediumCounter++;
		
		for(int j = strlen(str2) - strlen(output)-1; j>=0; j--)
		{
			if(str2[j] == '^')
			break;
			if(str2[j] != ' ')
			{
				if(str2[j] == ',')
				{
				trueCounter++;
				break;
				}
				else
				break;	
			}
		}
		i = 0;
		for(i; i< size2; i++)
		{
			size2 = strlen(str2) - strlen(output) + strlen(kakvoto);
			str2[i] = '^';
		}
		output = strstr (str2,kakvoto);
	}
	falseCounter += mediumCounter - trueCounter;
	
	strcpy (str2,str);
	size2 = size;
	i = 0;
	
	mediumCounter = 0;
	trueCounter = 0;
	
	output = strstr (str2,koito);
	
	while(output)
	{
		mediumCounter++;
		
		for(int j = strlen(str2) - strlen(output)-1; j>=0; j--)
		{
			if(str2[j] == '^')
			break;
			if(str2[j] != ' ')
			{
				if(str2[j] == ',')
				{
				trueCounter++;
				break;
				}
				else
				break;	
			}
		}
		i = 0;
		for(i; i< size2; i++)
		{
			size2 = strlen(str2) - strlen(output) + strlen(koito);
			str2[i] = '^';
		}
		output = strstr (str2,koito);
	}
	falseCounter += mediumCounter - trueCounter;
	
	strcpy (str2,str);
	size2 = size;
	i = 0;
	
	mediumCounter = 0;
	trueCounter = 0;
	
	output = strstr (str2,chiito);
	
	while(output)
	{
		mediumCounter++;
		
		for(int j = strlen(str2) - strlen(output)-1; j>=0; j--)
		{
			if(str2[j] == '^')
			break;
			if(str2[j] != ' ')
			{
				if(str2[j] == ',')
				{
				trueCounter++;
				break;
				}
				else
				break;	
			}
		}
		i = 0;
		for(i; i< size2; i++)
		{
			size2 = strlen(str2) - strlen(output) + strlen(chiito);
			str2[i] = '^';
		}
		output = strstr (str2,chiito);
	}
	falseCounter += mediumCounter - trueCounter;
	
	strcpy (str2,str);
	size2 = size;
	i = 0;
	
	mediumCounter = 0;
	trueCounter = 0;
	
	output = strstr (str2,che);
	
	while(output)
	{
		mediumCounter++;
		
		for(int j = strlen(str2) - strlen(output)-1; j>=0; j--)
		{
			if(str2[j] == '^')
			break;
			if(str2[j] != ' ')
			{
				if(str2[j] == ',')
				{
				trueCounter++;
				break;
				}
				else
				break;	
			}
		}
		i = 0;
		for(i; i< size2; i++)
		{
			size2 = strlen(str2) - strlen(output) + strlen(che);
			str2[i] = '^';
		}
		output = strstr (str2,che);
	}
	falseCounter += mediumCounter - trueCounter;
	
	return falseCounter;
}

