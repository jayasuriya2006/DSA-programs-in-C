#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int adj[MAX][MAX];
int vis[MAX];
int recStack[MAX];
int stack[MAX];
int top = -1;
int n;

void push(int x){
    stack[++top] = x;
}

int dfs(int node){
    vis[node] = 1;
    recStack[node] = 1;

    for(int i = 0; i < n; i++){
        if(adj[node][i]){
            if(!vis[i]){
                if(dfs(i)) return 1; // cycle found
            }
            else if(recStack[i]){
                return 1; // cycle detected
            }
        }
    }

    recStack[node] = 0;
    push(node); // push after visiting all neighbors
    return 0;
}

void topologicalSort(){
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            if(dfs(i)){
                printf("Cycle detected! Topological sort not possible.\n");
                return;
            }
        }
    }

    printf("Topological Order:\n");
    while(top != -1){
        printf("%d ", stack[top--]);
    }
}

int main(){
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &adj[i][j]);
        }
    }

    topologicalSort();
    return 0;
}