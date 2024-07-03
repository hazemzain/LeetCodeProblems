/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 int count_Binery_one(int n)
 {
    int count=0;
    for(int i=0;i<32;i++)
    {
        if((n>>i&1)==1)
        {
            count++;
        }
    }
    return count; 
 }
int* countBits(int n, int* returnSize) {
    int *array=(int *)malloc((n+1)*sizeof(int));
    int result=0;
    for(int i=0;i<=n;i++)
    {
        result=count_Binery_one(i);
        array[i]=result;

    }
    *returnSize=n+1;
    return array;
}

