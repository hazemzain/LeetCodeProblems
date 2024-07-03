char* convert(char* s, int numRows) {
    if (numRows == 1 || strlen(s) <= numRows) {
        return s;
    }

    int len = strlen(s);
    int step = 2 * numRows - 2;
    int outputLen = len;
    char* output = (char*)malloc(sizeof(char) * (outputLen + 1));
    output[outputLen] = '\0';

    int idx = 0;
    for (int row = 0; row < numRows; row++) {
        for (int i = row; i < len; i += step) {
            output[idx++] = s[i];
            if (row > 0 && row < numRows - 1 && i + step - 2 * row < len) {
                output[idx++] = s[i + step - 2 * row];
            }
        }
    }

    return output;
    /*int NumberOfColum=(strlen(s)/numRows)+1;
    printf("%d\n",NumberOfColum);
    int countString=0;
    int x=0;
    int y=0;
    int flag=0;
    char**array=(char **)malloc(numRows*sizeof(char*));
    for(int i=0;i<numRows;i++)
    {
        array[i]=(char*)malloc(NumberOfColum*sizeof(char));
        if(array[i]==NULL)
        {
            printf("the array[%d] colums is failed !",i);
        }
    }
    for(int i=0;i<numRows;i++)
    {
        for(int j=0;j<countString;j++)
        {
            array[i][j]='1';
        }
    }
    while(s[countString]!='\0')
    {
        if(x<numRows&&flag==0)
        {
            array[x][y]=s[countString];
           // printf("%c",array[x][y]);
            x++;
            //countString++;
        }else if(x==numRows)
        {
           // printf("\n enter the else if x==numRows\n");
            flag=1;
            y++;
            countString--;
            x--;
        }else if(flag==1&&x>=0)
        {
            
            array[x][y]=s[countString];
            //printf("%c",array[x][y]);
            x--;
            //countString++;
        }else if(flag==1&&x<0)
        {
            x=0;
            flag=0;
            y++;
            countString--;
            
        }
        
         countString++;
    }
   printf("%c",array[0][0]);
   printf("%c",array[0][1]);
  

    return s;*/

}