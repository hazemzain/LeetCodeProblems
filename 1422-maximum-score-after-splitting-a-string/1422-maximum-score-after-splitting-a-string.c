int NumberOfOneInString(char *str);
int NumberOfZeroInString(char *str);
int maxScore(char* s) {
    int len=strlen(s);
    printf("%d\n",len);
    int i=0;
    int pos=1;
    int x=0;
    int y=0;
    int sum=0;
    int max=0;
   // char* leftarr=(char *)malloc(sizeof(char)*len);
    //char* rightarr=(char *)malloc(sizeof(char)*len);
    char leftarr[1000];
    char rightarr[1000];
      memset(leftarr,0,1000);
        memset(rightarr,0,1000);
    while(i<len-1)
    {
        strncpy(leftarr,s,i+1);
        printf("%s\n",leftarr);
        strncpy(rightarr,s+i+1,len-i-1);
        printf("%s\n",rightarr);
        i++;
        x=NumberOfZeroInString(leftarr);
        y=NumberOfOneInString(rightarr);
         sum=x+y;
         printf("the x=%d\n",x);
         printf("the y=%d\n",y);
         printf("the sum=%d\n",sum);
         if(sum>max)
         {
            max=sum;
         }
        printf("\n---------------------------------------\n");
        memset(leftarr,0,1000);
        memset(rightarr,0,1000);

        



    }
    return max;
}

int NumberOfOneInString(char *str)
{
    int i=0;
    int count=0;
    while(str[i]!='\0')
    {
        if(str[i]=='1')
        {
            count++;
        }
        i++;
    }
    return count;
}
int NumberOfZeroInString(char *str)
{
    int i=0;
    int count=0;
    while(str[i]!='\0')
    {
        if(str[i]=='0')
        {
            count++;
        }
        i++;
    }
    return count;
}