int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int t=0;
    for(int i=0;i<hoursSize;i++)
    {
        if(hours[i]==target || hours[i]>target)
        {
            t++;
        }
    }
    return t;
}
