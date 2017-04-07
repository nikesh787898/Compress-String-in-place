#include<stdio.h>
void solve(char * str)
{
	int i=1;
	int j=1;
	int count = 0 ;
	while(str[j])	
	{
		
		count =1;
		while(str[j]==str[j-1]){
			j++;
			count++;	
		}
		
		int no= 0 ;
		while(count > 0 )
		{
			int rem = count % 10;
			no = no * 10 + rem;
			count = count / 10;
		}
		
		while(no > 0 )
		{
			int rem = no % 10;
			
			str[i++] = rem + 48 ;
			no = no / 10;			
		}
		if(str[j])
		{
			str[i++] = str[j++];
		}
	}
	str[i]= '\0';
}
int main()
{
	char str[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbccccc";
	solve(str);
	printf("%s",str);	
}
