#include<iostream>
using namespace std;
int main()
{
	int n, pr[20], wt[20], tat[20], avgwt=0, avgtat=0,ar[20],i,j, temp,c,p[20],bt[20];
	cout<<" Enter total number of process :- ";
	cin>>n;
	cout<<"Enter process Burst time:- "<<endl;
	
	
	for(int i=0;i<n;i++){
		cout<<"p["<<i+1<<"]:- ";
		cin>>bt[i];
		
		
	}
	cout<<"Enter process Priority time:- "<<endl;
	
	
	for(int i=0;i<n;i++){
		cout<<"p["<<i+1<<"]:- ";
		cin>>pr[i];
		
		
	}
	for(i=0;i<n;i++)
    {
        c=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[c])
                c=j;
        }
 
        temp=pr[i];
        pr[i]=pr[c];
        pr[c]=temp;
 
        temp= bt[i];
        bt[i]=bt[c];
        bt[c]=temp;
 
        temp=p[i];
        p[i]=p[c];
        p[c]=temp;
    }
    wt[0]=0;            
 
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
 
        avgwt+=wt[i];
    }
     cout<<"\nProcess\t\Priority time\tBurst Time\tTurnaround Time\tWating Time";
       for(i=0;i<n;i++)
    {
        
        tat[i] = wt[i] + bt[i];
		
       avgtat+=tat[i];
       cout<<"\nP["<<i+1<<"]"<<"\t\t"<< pr[i]<<"\t\t"<<bt[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i];
       
	 
    }
    avgwt/=i;
	avgtat/=i;
	cout<<"Average Turn Around Time :- "<<avgtat<<"\n";
    cout<<"Average Waiting Time :- "<<avgwt;  
	return 0;
}
 
	
