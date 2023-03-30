#include <bits/stdc++.h>
using namespace std;
#define vvll vector<vll>
#define str to_string
#define in binary_search
#define vll vector<ll>
#define sll set<ll>
#define vstr vector<string>
#define ll long long
#define ld long double
#define pb push_back
#define add insert
#define rall(x) rbegin(x),rend(x)
#define all(x) (x).begin(),(x).end()
#define sum(a) accumulate(all(a),0)
#define index(a,e) find(all(a),e)-begin(a);
#define rotr(a,s) rotate(a.begin(),a.begin()+a.size()-s,a.end());
#define rotl(a,s) rotate(a.begin(),a.begin()+s,a.end());
#define elif else if
#define rindex(a,e) find(rall(a),e)-rbegin(a);
#define replace(a,m,t) replace(a.begin(), a.end(), m, t)
#define rec(a,x)    reverse_copy (all(a), x.begin());
#define sortr(a) sort(rall(a))


int heap[10000000];
int n=1;

void bubble_up(int i){
    if (heap[i/2]<heap[i] && i!=1){
        swap(heap[i],heap[i/2]);
        bubble_up(i/2);
    }
    else{return;}
}

void bubble_down(int i){
    if (2*i < n && heap[i] < heap[2*i] && (2*i+1 >= n or heap[2*i+1] < heap[2*i])){
        swap(heap[2*i],heap[i]);
        bubble_down(2*i);
    }
     else if (2*i+1 < n && heap[2*i+1] > heap[i]){
        swap(heap[2*i+1],heap[i]);
        bubble_down(2*i+1);
    }    
}

int main(){
    while(1){
        string input;
        cin>>input;
        if (input == "insert"){
            ll a;cin>>a;
            heap[n]=a;
            n++;
            bubble_up(n-1);
        }
        else if (input == "max"){
            if (n==1){cout<<"ZERO ELEMENTS IN HEAP"<<endl;}else{
            cout<<heap[1]<<endl;}
        }
        else if (input == "delete_max"){
            swap(heap[1],heap[n-1]);
            n--;
            bubble_down(1);
        }
        else if (input == "increase_key"){
            ll s,d;cin>>s>>d;
            heap[s]+=d;
            bubble_up(s);
        }
        else if(input == "decrease_key"){
            ll s,d;cin>>s>>d;
            heap[s]-=d;
            bubble_down(s);
        }
        else if (input == "make_heap"){
            ll a;cin>>a;
            for (int t=n;t<n+a;t++){
                ll f;cin>>f;
                heap[t]=f;
            }
            n++;n+=a;
            for(int i=n-1;i>=1;i--){
                bubble_down(i);
            }
        }
    }
}