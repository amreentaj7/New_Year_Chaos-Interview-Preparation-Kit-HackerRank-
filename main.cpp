#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minimumBribes function below.
void minimumBribes(vector<int> q) {
 int Bribe = 0;
    for (int i = q.size() - 1; i >= 0; --i) {

        if (q[i] - (i + 1) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }

        for (int j = max(0, q[i] - 2); j < i; j++)
            if (q[j] > q[i]) Bribe++;
    }
    cout << Bribe << endl;
}



int main()
{
    int t;
    cin >> t;


        int n;
        cin >> n;

vector<int> q(n);
 for (int i = 0; i < n; i++) {
 cin>>q[i];
 }

minimumBribes(q);
}
