#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

int main(){
    vector<pair <string,int>> v;
    int pessoas, peso, limite, quantidade = 0;
    string nome;
    cin >> pessoas;
    for (size_t i = 0; i < pessoas; i++)
    {
        cin >> nome >> peso;
        v.push_back(make_pair(nome, peso));
    }
    cin >> limite;
    
    for (size_t i = 0; i < pessoas; i++)
    {
        if (v[i].second <= limite)
        {
            quantidade++;
        }
        else if (v[i].second > limite)
        {
            /* code */
        }
        
        
    }
    
}