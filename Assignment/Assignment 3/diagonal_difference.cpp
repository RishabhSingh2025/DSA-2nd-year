int diagonalDifference(vector<vector<int>> arr) 
{
    int n=arr.size();
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<=i;j++)
        {
            sum1=sum1+arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)==(n-1))
            {
                sum2=sum2+arr[i][j];
            }
        }
    }
    int difference=sum1-sum2;
    return abs(difference);
}


https://www.hackerrank.com/challenges/diagonal-difference/submissions/code/294497253
