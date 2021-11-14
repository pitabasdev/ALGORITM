#include<iostream>

using namespace std;
int main()
{
    int at[10],bt[10],b[10];
    int wt[10],tat[10],ct[10];
    int i,small,k=0,time;
    double avg_wt=0,avg_tat=0,last;

    for(i=0; i<10; i++)
    {
        cout<<"\nEnter Arrival Time: ";  
        cin>>at[i];
        cout<<"\nEnter burst time : ";  
        cin>>bt[i];
    }
    
    for(i=0; i<10; i++)
        b[i]=bt[i];

    b[9]=50;
    for(time=0; k!=10; time++)
    {
        small=9;
        for(i=0; i<10; i++)
        {
            if(at[i]<=time && bt[i]<bt[small] && bt[i]>0 )
                small=i;
        }
        bt[small]--;

        if(bt[small]==0)
        {
            k++;
            last=time+1;
            ct[small] = last;
            wt[small] = last - at[small] - x[small];
            tat[small] = last - at[small];
        }
    }
    cout<<"Process ID Arrival Time  Burst Time  Complete Time  Turn Around Time  Waiting Time \n";
    for(i=0; i<10; i++)
    {
        cout<<"p"<<i+1<<"\t\t"<<at[i]<<"\t\t"<<b[i]<<"\t\t"<<ct[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i]<<endl;
        avg_wt = avg_wt + wat[i];
        avg_tat = avg_tat + tat[i];
    }
    avg_tat/=10;
    avg_wt/=10;
    
    cout<<"Average Turn Around Time :- "<<avg_tat<<"\n";
    cout<<"Average Waiting Time :- "<<avg_wt;
    return 0;
}
