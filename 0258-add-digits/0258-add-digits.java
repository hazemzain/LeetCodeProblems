class Solution {
    public int addDigits(int num) {
        int result=0;

        if(num<10)
        {
            return num;
        }else
        {
            result=SumAllDigitInNumber(num);
            while(result>9)
            {
                result=SumAllDigitInNumber(result);
            }

        }
        return result;
    }
    public int SumAllDigitInNumber(int num)
    {
        int result=0;
        int digit=0;
        while(num>0)
        {
            digit=num%10;
            result=result+digit;
            num=num/10;

        }
        return result;
    }
}