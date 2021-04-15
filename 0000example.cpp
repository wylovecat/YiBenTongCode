#include<iostream>
#include<cstdio>
#include<cstring>
#include <queue>
#include <vector>
#include <climits>
using namespace std;
int n;
int maps[205][205]={0};
int dis[205]={0};
bool vis[205]={0};
void dijkstra(int s){
	memset(dis,0x3f,sizeof(dis));
	
	dis[s]=0;
	vis[s]=true;
	for(int i=1;i<=n;i++){
		dis[i]=min(dis[i],maps[s][i]);
	}
	int tmp=s;
//	cout<<"\n1111111111111\n";
	for(int i=1;i<n;i++){
		int mins=INT_MAX;
		//找剩下点中离源点最近的点 
		for(int j=1;j<=n;j++){
			if(!vis[j]&&dis[j]<mins){
				mins=dis[j];
				tmp=j;
			}
		}
		vis[tmp]=true;
		for(int j=1;j<=n;j++){
			dis[j]=min(dis[j],dis[tmp]+maps[tmp][j]);
		}
	}
//	cout<<"\n222222222222\n";
	
	
}

int main()
{	
	cin>>n;
	memset(maps,0x3f,sizeof(maps));
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			cin>>maps[i][j];
		//	maps[j][i]=maps[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j) maps[i][j]=0;
		}
	}
	dijkstra(1);
	
//	for(int i=1;i<=n;i++){
//		cout<<dis[i]<<" ";
//	}
	cout<<dis[n]; 
	
	
    return 0;
}
