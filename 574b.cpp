#include<bits/stdc++.h>

using namespace std;

set<int> s[4004];
vector< pair<int,int> >r;
int x[4004];
int main(){
	int n,m,a,b,tp,ans=-1;
	cin >> n >> m;
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		s[a].insert(b);
		s[b].insert(a);
		x[a]++;
		x[b]++;
		r.push_back(make_pair(a,b));
	}
	for(int i=0;i<r.size();i++){
		a=r[i].first;
		b=r[i].second;
		for(int j=1;j<=n;j++){
			if(s[a].find(j)!=s[a].end() && s[b].find(j)!=s[b].end()){
				tp = x[a]+x[b]+x[j]-6;
//				cout << a << ' ' << b << ' ' << j << ' ' <<tp<<endl;
				if(ans==-1)
					ans=tp;
				else if(ans>tp)
					ans=tp;
			}
		}
	}
	cout << ans << endl;
	return 0;
}



