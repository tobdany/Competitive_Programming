#include <bits/stdc++.h>
using namespace std;

struct TrieNode{
        char val;
        bool end;
        map<char,TrieNode*>children;

        TrieNode(char c){
            this->val=c;
            this->end=false;
        }

        void insert(string word){
            auto curr=this;
            for(char c:word){
                
                if(!curr->children.count(c)){ //es decir si no existe en el mapa
                    curr->children[c]=new TrieNode(c); //le estamos asignando al mapa en children[c] un nodo
                }
                curr=curr->children[c]; //sirve para hacer que curr ahora apunte al siguiente nodo
            }
            curr->end=true; //hemos acabado de analizar la palabra
        }

            int countPrefix(string word){
                auto curr=this;
                int cuenta=0;
                int i=0;
                for(char c:word){
                    //c=c-'a';
                    curr=curr->children[c]; //apunta al nodo con la letra que estamos buscando
                    
                    i++;
                    
                    if(curr->end){
                         cuenta++; 
                         for(int j=0;j<i;j++) cout << word[j];
                    }
                }

                //cout << endl;
                return --cuenta; //esto se da porque cuenta la primera iteracion, y esta mal
                
            }

    

    int contarCuantosTecleos(string word){
                auto curr=this;
                int cuenta=1;
                int i=-1;
                for(char c:word){
                    i++;
                    int last=word.size()-1;
                    
                    curr=curr->children[c]; //apunta al nodo con la letra que estamos buscando

                    if(word.size()!=1){
                    if((curr->children.size()>1) ||((curr->end) && (i<last)) ){
                        
                        cuenta++;
                        
                    }
                    }

                    
                }

              
                return cuenta; 
                
            }

};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int entrada;
    int t,counttotal;
    double count;
    double resultado=0;
    
  while(cin>>t){  
    TrieNode* trie=new TrieNode('.');

    //cin >> t;
    string temp;
    vector<string>directory(t);
    for(int i=0;i<t;i++){
        cin >> directory[i];
    }

    for(string num:directory){
        trie->insert(num);
    }

     count=0;
    
    for(string num:directory){
        count += trie->contarCuantosTecleos(num);    

    }

    //resultado=(double)count/t;
    cout << fixed << setprecision(2) << count/t*1.0 << "\n";

    //delete trie;
    //directory.clear();
    
    //auto trie=new TrieNode('.');
  }
    

    return 0;
}