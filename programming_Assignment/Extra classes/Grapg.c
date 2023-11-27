#include<stdio.h>
#include<stdlib.h>
int main(){
        int n,e,i,j,u,v;
        int **p;
        printf("Enter number of nodes and edges\n");
        scanf("%d%d",&n, &e);
        p=(int**)calloc(n,sizeof(int*));

        for(i=0; i<=n;i++)
        {
            p[i]=(int**)calloc(n,sizeof(int*));
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            
            {
                p[i][j]=0;
            }
        }
        for(i=0; i<e; i++)
        {
            printf("Enter edge and end points\n");
            scanf("%d%d",&u, &v);
            p[u][v]=1;
            p[v][u]=1;
        }
        for(i=1; i<=n; i++){
            for (j=1; j<=n; j++)
            {
                printf("%d\t",p[i][j]);
            }
            printf("\n");
        }
        return 0;
}



