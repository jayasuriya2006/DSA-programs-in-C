#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int adj[MAX][MAX];
int vis[MAX];
int recStack[MAX];
int stack[MAX];
int top = -1;
int n;

void push(inr x){
  stack[++top]=x;
}

int dfs(int node){
  vis[node]=1;
  recStack[node]=1;
  for(int i=0;i<n;i++){
    if(adj[node][i]){
      if(!vis[i]){
        if(dfs(i))return 1;
      }
      else if(recStack[i])
    }
  }
}
