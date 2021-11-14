#include<iostream>
using namespace std;
int main()
{
	int n, bt[20], wt[20], tat[20], avgwt=0, avgtat=0,ar[20],i,j, temp,c,ct[20];
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
for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(bt[i]>bt[j])
             {
                 temp=ar[i];
                 ar[i]=ar[j];
                 ar[j]=temp;

                 c=bt[i];
                 bt[i]=bt[j];
                 bt[j]=c;

               // d=index[i];
                 //index[i]=index[j];
                 //index[j]=d;

            }
        }
            
    }
    wt[0]=0;

 

    for(i=0;i<n;i++)
    {
        wt[i+1] = wt[i] + bt[i];
        tat[i] = wt[i] + bt[i];
        ct[i] = tat[i]+ ar[i];
       avgtat+=tat[i];
       avgwt+=wt[i];
	 
    }
   
    
	avgwt/=i;
	avgtat/=i;
	 cout<<"\nProcess\t\Arrival Time\tBurst Time\tTurnaround Time\tWating Time";
    
    for(i=0;i<n;i++)
    {
        cout<<"\nP["<<i+1<<"]"<<"\t\t"<<ar[i]<<"\t\t"<<bt[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i];
    }
	cout<<"nnAverage Wating time:- "<<avgwt;
	cout<<"nAverage turnaround time:- "<<avgtat;
	return 0;
}
