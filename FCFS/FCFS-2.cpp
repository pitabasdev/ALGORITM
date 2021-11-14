#include<iostream>
using namespace std;
int main()
{
	int n, bt[20], wt[20], tat[20], avgwt=0, avgtat=0,ar[20],i,j,ct[20];
	cout<<" Enter total number of process :- ";
	cin>>n;
		cout<<"Enter process arrival time:- "<<endl;
	
	for(int i=0;i<n;i++){
		cout<<"p["<<i+1<<"]:- ";
		cin>>ar[i];
		
	}
	cout<<"Enter process Burst time:- "<<endl;
	
	
	for(int i=0;i<n;i++){
		cout<<"p["<<i+1<<"]:- ";
		cin>>bt[i];
		
		
	}
	 ct[0]=bt[0];
    
    for(i=0;i<5;i++)
    {
        ct[i+1] = ct[i] + bt[i+1];
    }

for(i=0;i<n;i++)
    {
        tat[i] = ct[i] - ar[i];
        wt[i] = tat[i] - bt[i];
        avgtat+=tat[i];
        avgwt+=wt[i];
    }
	cout<<"\nProcess\t\Arrival Time\tBurst Time\tTurnaround Time\tWating Time";
	for(i=0;i<n;i++){
		tat[i]=bt[i]+wt[i];
		
		avgwt+=wt[i];
		avgtat+=tat[i];
		cout<<"\nP["<<i+1<<"]"<<"\t\t"<<ar[i]<<"\t\t"<<bt[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i];
	}
		avgwt/=i;
	avgtat/=i;
	cout<<"nnAverage Wating time:- "<<avgwt;
	cout<<"nAverage turnaround time:- "<<avgtat;
	
	

		return 0;
}
