#include<stdio.h>
#include<time.h>
int array[20][20],queue[20],visited[20],n,i,j,f=0,r=-1;
void bfs(int v)
{
for(i=1;i<=n;i++)
if(array[v][i] && !visited[i])
queue[++r]=i;
if(f<=r)
{
visited[queue[f]]=1;
bfs(queue[f++]);
}
}
void main()
{
	clock_t start,end;
    double time;
int v;
printf("\n Enter the number of vertices:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
queue[i]=0;
visited[i]=0;
}
printf("\n Enter graph data in matrix form:\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&array[i][j]);
printf("\n Enter the starting vertex:");
scanf("%d",&v);
start=clock();
bfs(v);
end=clock();
printf("\n The node which are reachable are:\n");
for(i=1;i<=n;i++)
if(visited[i])
printf("%d\t",i);
time=(double)(end-start)/CLOCKS_PER_SEC;
printf("\nTime taken by BFS is:%lf\n",time);

}

