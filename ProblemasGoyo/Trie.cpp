// Video con explicación https://youtu.be/GEoUPRYguY4

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

struct TrieNode {
    char val;
    bool end;
    map<char, TrieNode*> children;  // TreeMap, dict

    TrieNode(char c) {
        val = c;
        end = false;
    }

    // Tiempo O(N) siendo N la longitud del string
    void insert(string word) {
        auto curr = this;
        for (char c : word) {
            if (!curr->children.count(c)) {           // TreeMap#get
                curr->children[c] = new TrieNode(c);  // TreeMap#put
            }
            curr = curr->children[c];  // TreeMap#get
        }
        curr->end = true;
    }

    // Tiempo O(N) siendo N la longitud del string
    int countPrefix(string word) {
        auto curr = this;
        int cnt = 0;
        for (char c : word) {
            curr = curr->children[c];
            if (curr->end) cnt += 1;
        }
        return cnt - 1;
    }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // 1. leer nuestra entrada
    int t;
    cin >> t;
    vector<string> directory(t);  // ArrayList
    for (int i = 0; i < t; i++) {
        cin >> directory[i];
    }

    // 2. construir nuestro arbol de prefijos
    auto trie = new TrieNode('.');
    for (string num : directory) {
        trie->insert(num);
    }

    // 3. contar los prefijos de cada numero
    int count = 0;
    for (string num : directory) {
        count += trie->countPrefix(num);
    }
    cout << count << endl;  // print
    return 0;
}