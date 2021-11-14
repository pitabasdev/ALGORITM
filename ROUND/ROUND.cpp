 #include<iostream>

using namespace std;
 
int main()
{
	int wt,tat,ar[20],bt[20],rt[20],n;
  int k=10,i,j,time,count=0,qt;
  float avgwt,avgtat;
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
		rt[i]=bt[i];
		
		
	}
	cout<<"Enter Time Quantum: ";
  cin>>qt;
	 cout<<"\nProcess\t\Priority time\tBurst Time\tTurnaround Time\tWating Time";
	 for(time=0,i=0;k!=0;)
  {
    if(rt[i]<=qt && rt[i]>0)
    {
      time+=rt[i];
      rt[i]=0;
      count=1;
    }
    else if(rt[i]>0)
    {
      rt[i]-=qt;
      time+=qt;
    }
    if(rt[i]==0 && count==1)
    {
      k--;
      wt+=time-ar[i]-bt[i];
      tat+=time-ar[i];
      count=0;
      cout<<"\nP["<<i+1<<"]"<<"\t\t"<<ar[i]<<"\t\t"<<bt[i]<<"\t\t"<<tat<<"\t\t"<<wt;
    }
    if(i==10-1)
      i=0;
    else if(ar[i+1]<=time)
      i++;
    else
      i=0;
  }
  avgwt=avgwt/i;
  avgtat=avgtat/i; 

  cout<<"Average Turn Around Time :- "<<avgtat<<"\n";
  cout<<"Average Waiting Time :- "<<avgwt;
    
  
  return 0;
}
  
 
  
 
