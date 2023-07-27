/*Problem

Mahabharat in Parallel Universe

Yudhisthira and Duryodhana, the two brothers, wanted to play a game to acquire the kingdom of Hastinapuram. So, they decided to play an analytical game instead of a huge war which can cause many lives.

Game Setup:

Yudhisthira has n asthras
 with ability values {a1,a2,…,an}
 and Duryodhana has  m asthras
 with ability values {b1,b2…,bm}
. Each player has an opportunity to choose two asthras
 : one on their side and one on the other side.

Then, these asthras
 will fight each other. Suppose the ability values for the chosen asthras
 are x
 and y
 respectively, then the ability values of the asthras
 will become x−y
 and y−x
 respectively. If the ability value of any asthra
 is smaller than or equal to 0
, the asthra
 fails and cannot be used again.

The game ends when at least one player has no asthras
 are left . The winner is the player with at least one asthras
 is left with him. If both players have no asthras
 left, the game ends in a draw and the kingdom will be shared.

Find the result of the game when both players play optimally.

Note :Yudhisthira always starts the game first.*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

int main(){
#ifndef ONLINE_JUDGE
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
#endif
std::ios::sync_with_stdio(false);
int t;
cin >> t;
for(int i=0;i<t;i++){
int n,m,y[999],d[999];
cin >> n >> m;

for(int i=0; i<n; i++){
    cin >> y[i];
}
for(int i=0; i<m; i++){
    cin >> d[i];
}
int l1=0,l2=0;
for(int i=0; i<n; i++){
    l1=l1+y[i];
}
for(int i=0; i<m; i++){
    l2=l2+d[i];
}
  if(l1>l2){
    cout<< "Yudhisthira\n";
  }
  else if(l1<l2){
    cout<< "Duryodhana\n";
  }
  else{
    cout<< "Draw\n";
  }
}
}
