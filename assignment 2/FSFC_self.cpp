#include<bits/stdc++.h>
using namespace std;


class Process
{
    public:
    int pid;
    int arrival_time=0;
    int burst_time=0;
    int response_time=0;
    int waiting_time=0;
    int turnaround_time=0;
    Process(int id,int arrival_time,int burst_time)
    {
        this->pid = id;
        this->arrival_time=arrival_time;
        this->burst_time = burst_time;
    }

    int get_arrival()
    {
        return arrival_time;
    }
};
class FSFC
{
    public:
    vector<Process> Jobs;//main jobs vector
    
    FSFC(vector<Process> p)
    {
        this->Jobs =p;
    }

    void arrange(int num)
    {
        int i,j;
        for(i=0;i<num;++i)
        {
            for(j=i+1;j<num;++j)
            {
                if(Jobs[i].get_arrival()>Jobs[j].get_arrival())
                {
                    Process temp = Jobs[i];
                    Jobs[i]=Jobs[j];
                    Jobs[j]=temp;
                }
            }
        }
    }
    
    int add_jobs()
    {       
        cout<<"Enter #new jobs to add:";
        int n;cin>>n;
        for(int i=0;i<n;i++)
            {
                cout<<endl<<"enter arrival time of job "<<i+1<<":";
                int arrival_time;cin>>arrival_time;
                cout<<endl<<"enter burst time of job "<<i+1<<":";
                int burst_time;cin>>burst_time;
                Process p(i+1,arrival_time,burst_time);
                Jobs.push_back(p);
            }
        arrange(n);
        return n;
    }

    void get_response(int n)
    {
        Jobs[0].response_time = 0;
        for(int i=1;i<n;i++)
        {
            Jobs[i].response_time = Jobs[i].arrival_time + Jobs[i-1].response_time;
            if(Jobs[i].response_time<Jobs[i].arrival_time)
                Jobs[i].response_time = Jobs[i].arrival_time;
        }
    }

    void get_waiting(int n)
    {
        Jobs[0].waiting_time = 0;
        for(int i=1;i<n;i++)
            Jobs[i].waiting_time =  Jobs[i].response_time-Jobs[i].arrival_time;       
    }

    void get_turnround(int n)
    {
        for(int i=1;i<n;i++)
            Jobs[i].turnaround_time =  Jobs[i].waiting_time+Jobs[i].burst_time;
    }

    void get_avg(int n)
    {
        float avg_waiting_time=0;
        for(int i=0;i<n;i++)
            avg_waiting_time += Jobs[i].waiting_time;
        avg_waiting_time = avg_waiting_time/Jobs.size();
        cout<<"\n Average waiting time for all processes is:"<<avg_waiting_time<<endl;;
    }
};



vector<Process>Jobs;

int main()
{
    FSFC A(Jobs);
    int n = A.add_jobs();
    A.get_response(n);
    A.get_waiting(n);
    A.get_turnround(n);
    cout<<"Processes "<<"  Arrival time   "<<"  Burst time  "<<" Waiting time  "<<" Turn around time\n";
    for (int i=0;i<n;i++)
    {
    cout<<"\t"<<A.Jobs[i].pid<<"\t     "<<A.Jobs[i].arrival_time<<"\t\t      "<<A.Jobs[i].burst_time<<"\t     "<<A.Jobs[i].waiting_time<<"\t\t      "<<A.Jobs[i].turnaround_time<<"\n";
    }

    A.get_avg(n);
    return 0;
}





