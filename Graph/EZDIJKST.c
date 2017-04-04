#include<stdio.h>
int mat[10004][10004],ver;
int minDist(int dist[], int sptSet[])
{
   
   int min = 1000000000, min_index,v;
  
   for (v = 1; v <= ver; v++)
     if (sptSet[v] == 0 && dist[v] <= min)
         min = dist[v], min_index = v;
  
   return min_index;
}
void dij(int src , int dest){
	int i,j,dist[10004],vis[10004];
	for(i=1;i<=ver;i++){
		dist[i] = 1000000000;
		vis[i] = 0;
		}
	dist[src] = 0;
	for(i=1;i<=ver;i++){
		int u = minDist(dist,vis);
		vis[u] = 1;
		for(j=1;j<=ver;j++){
			if(vis[j] == 0 && mat[u][j] && dist[u] != 1000000000
				&& dist[u] + mat[u][j] < dist[j] )
				dist[j] = dist[u] + mat[u][j];
			}
}
	if(dist[dest] == 1000000000 )
		printf("NO\n");
	else
		printf("%d\n",dist[dest]);
	
}
int main(){
	int t,edges,src,dest,a,b,w,i,j;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&ver,&edges);
		for(i=1;i<=ver;i++){
			for(j=1;j<=ver;j++){
				mat[i][j] = 1000000000;
					}
			}
		while(edges--){
			scanf("%d%d%d",&a,&b,&w);
			mat[a][b] = w;
			}
		scanf("%d%d",&src,&dest);
			dij(src,dest);
		}
	return 0;
}
