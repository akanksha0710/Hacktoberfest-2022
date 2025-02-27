   
#include <bits/stdc++.h>
using namespace std;

#define ff                 first
#define ss                 second
#define ll                 long long int
#define ld                 long double
#define pb                 push_back
#define mp                 make_pair
#define pii                pair<ll, ll>
#define vi                 vector<ll>
#define vs                 vector<string>
#define mii                map<ll, ll>
#define ump                unordered_map<ll, ll>
#define all(n)               n.begin(),n.end()
#define mid(l,r)           (l+(r-l)/2)
#define pq_max             priority_queue<ll>
#define pq_min             priority_queue<int, vi, greater<ll> >
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define mod                1000000007
#define inf                1e18
#define ps(x, y)           fixed<<setprecision(y)<<x
#define mk(arr,n,type)     type *arr = new type[n];
#define w(x)               int x; cin>>x; while(x--)
#define loop(i,a,b)     for(int i=(a);i<=(b);i++)

void file_i_o(){
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   #ifndef ONLINE_JUDGE
       freopen("/home/anand/Desktop/InputOutput/input.txt", "r", stdin);
        freopen("/home/anand/Desktop/InputOutput/output.txt", "w", stdout);
    #endif 
}     

void merge(std::vector<int>& v,int start,int mid,int end){
       std::vector<int>temp(end-start+1);
       int i = start,j=mid+1,k=0;
       while(i<=mid and j<=end){
       	if(v[i]<=v[j]){
       		temp[k]=v[i];
       		i++;
       		k++;
       	}else{
       		temp[k]=v[j];
       		j++;
       		k++;
       	}
       }
       while(i<=mid){
       	temp[k]=v[i];
       	i++;
       	k++;
       }
       while(j<=end){
       	temp[k]=v[j];
       	j++;
       	k++;
       }
       for (int i = start; i <=end ; i++)
       {
       	/* code */
       	v[i]=temp[i-start];
       }
}

void merge_sort(std::vector<int>& v,int start,int end){
	if(start<end){
		int mid = start+(end-start)/2;
		merge_sort(v,start,mid);
		merge_sort(v,mid+1,end);
		merge(v,start,mid,end);
	}
}


int main(int argc, char const *argv[])
{

    
    file_i_o();
    std::vector<int> v{14,7,3,12,9,11,6,2};
    merge_sort(v,0,v.size()-1);
    for (int i = 0; i < v.size(); i++)
    {
    	/* code */
    	cout<<v[i]<<" ";
    }
    return 0;

}
