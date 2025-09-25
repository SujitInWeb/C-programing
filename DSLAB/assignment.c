#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Adjacency matrix to represent the graph
int graph[MAX][MAX];
int visited[MAX];
int queue[MAX], front = -1, rear = -1;

// Function to enqueue
void enqueue(int vertex) {
    if (rear == MAX - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = vertex;
}

// Function to dequeue
int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return -1;
    }
    return queue[front++];
}

// Function for Breadth-First Search
void BFS(int startVertex, int n) {
    enqueue(startVertex);
    visited[startVertex] = 1;

    while (front <= rear) {
        int currentVertex = dequeue();
        printf("%d ", currentVertex);

        for (int i = 0; i < n; i++) {
            if (graph[currentVertex][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

// Main function
int main() {
    int n, edges, v1, v2, startVertex;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    // Initialize graph and visited array
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        for (int j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
    }

    // Input edges
    printf("Enter the edges (format: vertex1 vertex2):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d", &v1, &v2);
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;  // Remove this line if the graph is directed
    }

    printf("Enter the starting vertex for BFS: ");
    scanf("%d", &startVertex);

    printf("BFS Traversal: ");
    BFS(startVertex, n);
    printf("\n");

    return 0;
}