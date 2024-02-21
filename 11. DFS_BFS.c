#include<stdio.h>

#include<stdlib.h>

int a[10][10], visited[10], n;




void BFS(int u)

{

	int f,r,q[10],v;

	printf("The nodes visited from %d ",u);

	f=0,r=-1;

	q[++r]=u;

	visited[u]=1;

	//printf("%d ",u);

	while(f<=r)

	{

		u=q[f++];

		for(v=0;v<n;v++)

		{

			if(a[u][v]==1)

			{

				if(visited[v]==0)

				{

					printf(" %d ",v);

					visited[v]=1;

					q[++r]=v;

				}

			}

		}

	}

	printf("\n");

}

void DFS(int v)

{

	int w;

	visited[v]=1;

	printf(" %d ",v);

	for(w=0;w<n;w++)

	{

		if(a[v][w]==1 && visited[w]==0)

		DFS(w);

	}

}

void main()

{

	 int i,j,choice,source,s1;

	 printf("\nGRAPH TRAVERSALS USING ADJACENCY MATRIX\n");

	 printf("Enter the number of nodes\n");

	 scanf("%d",&n);

	 printf("Enter the adjacency matrix\n");

	 for(i=0;i<n;i++)

	 {

		for(j=0;j<n;j++)

		scanf("%d",&a[i][j]);

	 }

	 for(;;)

	 {

		printf("\nGRAPH TRAVERSALS USING ADJACENCY MATRIX\n");

		printf("\n1:Reachable nodes using BFS\n");

		printf("2:Reachable nodes using DFS\n");

		printf("3:Exit\n");

		printf("Enter the Choice\n");

		scanf("%d",&choice);

		switch(choice)

		{

			case 1:printf("Enter the Source Node\n");

				   scanf("%d",&s1);

			       BFS(s1);

			       break;

			case 2: for(source=0;source<n;source++)

			       {

						for(i=0;i<n;i++)

							visited[i]=0;

						printf("\n Reachable Node from %d: ",source);

						DFS(source);

				   }

				   break;

			case 3:exit(0);

		}

	}

}
