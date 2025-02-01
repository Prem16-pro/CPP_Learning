#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <sstream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* buildTree(const vector<string>& nodes) {
    if (nodes.empty() || nodes[0] == "null") return nullptr;

    queue<TreeNode*> q;
    TreeNode* root = new TreeNode(stoi(nodes[0]));
    q.push(root);

    int i = 1;
    while (!q.empty() && i < nodes.size()) {
        TreeNode* current = q.front();
        q.pop();

        if (i < nodes.size() && nodes[i] != "null") {
            current->left = new TreeNode(stoi(nodes[i]));
            q.push(current->left);
        }
        i++;

        if (i < nodes.size() && nodes[i] != "null") {
            current->right = new TreeNode(stoi(nodes[i]));
            q.push(current->right);
        }
        i++;
    }

    return root;
}

void reverseInOrder(TreeNode* root, int& sum) {
    if (!root) return;

    reverseInOrder(root->right, sum);

    sum += root->val;
    root->val = sum;

    reverseInOrder(root->left, sum);
}

vector<string> levelOrder(TreeNode* root) {
    vector<string> result;
    if (!root) return result;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        if (current) {
            result.push_back(to_string(current->val));
            q.push(current->left);
            q.push(current->right);
        } else {
            result.push_back("null");
        }
    }

    while (!result.empty() && result.back() == "null") {
        result.pop_back();
    }

    return result;
}

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<string> nodes(n);
        for (int i = 0; i < n; ++i) {
            cin >> nodes[i];
        }

        TreeNode* root = buildTree(nodes);

        int sum = 0;
        reverseInOrder(root, sum);

        vector<string> result = levelOrder(root);
        for (const string& s : result) {
            cout << s << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
