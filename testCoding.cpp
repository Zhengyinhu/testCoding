#define test1000 1

//十字斩
#ifdef test001
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main(void)
{
	int n;
	while (cin >> n) {
		vector<int> row(n, 0);
		vector<int> col(n, 0);
		vector<vector<int>> a(n, vector<int>(n, 0));
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				scanf("%d", &a[i][j]);
				row[i] += a[i][j];
				col[j] += a[i][j];
			}
		}

		for (; n >= 1; n--) {
			if (n == 1) { printf("%d %d\n", 1, 1); break; }

			int r = -1, c = -1, s = -1;
			for (int i = 0; i < n; ++i) {
				for (int j = 0; j < n; ++j) {
					if (row[i] + col[j] - a[i][j] > s) {
						s = row[i] + col[j] - a[i][j];
						r = i;
						c = j;
					}
				}
			}
			printf("%d %d\n", r + 1, c + 1);

			for (int j = 0; j < n; ++j) col[j] -= a[r][j];
			for (int i = 0; i < n; ++i) row[i] -= a[i][c];

			row.erase(row.begin() + r);
			col.erase(col.begin() + c);
			for (int i = 0; i < n; ++i) a[i].erase(a[i].begin() + c);
			a.erase(a.begin() + r);

		}
	}
	return 0;
}
#endif // test001

//根据数组构建最大树
#ifdef test002
#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
#include <queue>

using namespace std;

struct TreeNode
{
	int value;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int v) :value(v), left(nullptr), right(nullptr) {}
};

void popStackAndPutMap(stack<TreeNode*>& s, unordered_map<TreeNode*, TreeNode*>& map)
{
	TreeNode* t = s.top();
	s.pop();
	if (s.empty()) {
		map[t] = nullptr;
	}
	else {
		map[t] = s.top();
	}
}
TreeNode* getMaxTree(vector<TreeNode*> v)
{
	//get lBigMap and rBigMap
	unordered_map<TreeNode*, TreeNode*> lBigMap;
	stack<TreeNode*> s;
	for (int i = 0; i < v.size(); i++) {
		TreeNode* curNode = v[i];
		while (!s.empty() && s.top()->value < curNode->value) {
			popStackAndPutMap(s, lBigMap);
		}
		s.push(curNode);
	}
	while (!s.empty()) {
		popStackAndPutMap(s, lBigMap);
	}
	unordered_map<TreeNode*, TreeNode*> rBigMap;
	for (int i = v.size()-1; i >= 0; i--) {
		TreeNode* curNode = v[i];
		while (!s.empty() && s.top()->value < curNode->value) {
			popStackAndPutMap(s, rBigMap);
		}
		s.push(curNode);
	}
	while (!s.empty()) {
		popStackAndPutMap(s, rBigMap);
	}
	//get maxTree
	TreeNode* head;
	for (int i = 0; i < v.size(); i++) {
		TreeNode* curNode = v[i];
		TreeNode* leftBig = lBigMap[curNode];
		TreeNode* rightBig = rBigMap[curNode];

		if (leftBig == nullptr&&rightBig == nullptr) {
			head = curNode;
		}
		else if (leftBig == nullptr) {
			if (rightBig->left == nullptr) {
				rightBig->left = curNode;
			}
			else {
				rightBig->right = curNode;
			}
		}
		else if (rightBig == nullptr) {
			if (leftBig->left == nullptr) {
				leftBig->left = curNode;
			}
			else {
				leftBig->right = curNode;
			}
		}
		else {
			TreeNode* maxBig = leftBig->value > rightBig->value ? leftBig : rightBig;
			if (maxBig->left == nullptr) {
				maxBig->left = curNode;
			}
			else {
				maxBig->right = curNode;
			}
		}
	}
	return head;
}
void levelGetTree(TreeNode* head,vector<vector<int>>& ans)
{
	if (head == nullptr) return;
	queue<TreeNode*> q;
	q.push(head);
	while (!q.empty())
	{
		int len = q.size();
		vector<int> _ans;
		for (int i = 0; i < len; i++) {	
			TreeNode* cur = q.front();
			_ans.push_back(cur->value);
			q.pop();
			if (cur->left != nullptr) q.push(cur->left);
			if (cur->right != nullptr) q.push(cur->right);
		}
		ans.push_back(_ans);
	}
}

int main()
{
	int N;
	cin >> N;
	vector<TreeNode*> v(N);
	int value;
	for (int i = 0; i < N; i++) {
		cin >> value;
		TreeNode* t = new TreeNode(value);
		v[i] = t;
	}
	TreeNode* maxNode = getMaxTree(v);
	vector<vector<int>> ans;
	levelGetTree(maxNode, ans);
	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans[i].size(); j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}


#endif // test002


