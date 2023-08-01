#include <iostream>
#include <vector>
#include <queue>

using namespace std;
vector<int> DAT;
vector<vector<int>> graph;
int N, M, K, P;
void input()
{
	cin >> N >> M >> K >> P;
	DAT = vector<int>(N+1);
	graph = vector<vector<int>>(N+1,vector<int>());
	for (int i = 0; i < M; i++)
	{
		int A, B;
		cin >> A >> B;
		graph[A].push_back(B);
	}

}


int main()
{
	int flag = 0;
	int cnt = 0;
	input();

	queue<int> bfs_queue;
	bfs_queue.push(P);
	DAT[P] = 1;

	while (!bfs_queue.empty())
	{
		int now = bfs_queue.front();
		bfs_queue.pop();

		for (int i = 0; i < graph[now].size(); i++)
		{
			if (DAT[graph[now][i]] == 0)
			{
				DAT[graph[now][i]] = DAT[now] + 1;
				bfs_queue.push(graph[now][i]);

			}
		}
	}
	for (int i = 0; i < DAT.size(); i++)
	{
		if (DAT[i] == K + 1)
		{
			cout << i << endl;
			flag = 1;
		}
	}
	if (!flag)
		cout << -1;
}
