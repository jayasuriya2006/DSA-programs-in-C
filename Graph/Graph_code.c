#include <stdio.h>

#define MAX 100

int adj[MAX][MAX];
int main(){
  int n;
  int e;
  printf("Enter number of vertices: ");
  scanf("%d",&n);
  printf("Enter number of edges: ");
  scanf("%d", &e);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      adj[i][j]=0;
    }
  }
  printf("Enter edge (u v):\n");
  for(int i=0;i<e;i++){
    
    int u,v;
    scanf("%d %d",&u,&v);
    adj[u][v]=1;
    adj[v][u]=1;
  }
printf("\nAdjacency Matrix:\n");
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
          printf("%d ", adj[i][j]);
      }
      printf("\n");
  }
  return 0;
}
