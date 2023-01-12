#include<stdio.h>
#define V 6
#define INF 99999
int dist[V][V];
void printSolution();


void floydWarshall (int graph[][V])
{
    int i, j, k;
    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            dist[i][j] = graph[i][j];// initialization wrt data
 //creation n+1 matrix for nXn matrix

    for (k = 0; k < V; k++)// via every possible vertex
    {
        
        for (i = 0; i < V; i++)//estimates of dis. matrix of every vertex
        {
            
            for (j = 0; j < V; j++)//routes of shoretst paths
            {

                if (dist[i][k] + dist[k][j] < dist[i][j])  // if distance through diff. points > direct distance.
                    dist[i][j] = dist[i][k] + dist[k][j];//predessor
            }
        }
    }
  printSolution();
}
void printSolution()
{	system("cls");

    printf ("\n\t\t\t\t\t\t\t\t\tThe following matrix shows the shortest distances"
            " between every pair of vertices \n");
    for (int i = 0; i < V; i++)
    {
	printf("\t\t\t\t\t\t\t\t\t");
        for (int j = 0; j < V; j++)
        {	
		
            if (dist[i][j] == INF)
                printf("%7s", "INF");
            else
                printf ("%7d", dist[i][j]);// 7 places of decimal
        }
        printf("\n");
	
    }
	printf("\t\t\t\t\t\t\t\t\t%s","* ADMIN USE ONLY !\n");
}
void cal()
{

    int graph[V][V] = { {0,5,3,6,5,2},
                        {3,0,3,INF,6,INF},
                        {4,INF,0,5,INF,INF},
                        {INF,INF,INF,0,3,INF},
                        {INF,6,INF,INF,0,6},
                        {2,INF,INF,INF,4,0}
                      };
 
    floydWarshall(graph);
}