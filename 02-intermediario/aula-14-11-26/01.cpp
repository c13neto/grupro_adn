#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main() {
  vector<pair<string, int>> entrada, caiu;
  int pessoas, peso, limite;
  string nome;
  cin >> pessoas;
  for (size_t i = 0; i < pessoas; i++) {
    cin >> nome >> peso;
    entrada.push_back(make_pair(nome, peso));
  }
  cin >> limite;
  for (size_t i = 0; i < pessoas; i++) {
    if (entrada[i].second > limite) {
      caiu.push_back(make_pair(entrada[i].first, entrada[i].second));
    }
  }
  if (!caiu.empty()) {
    cout << "Vamos virar almoço de aranhas gigantes!";
    for (const auto& pessoa : caiu) {
      cout << "\n" << pessoa.first;
    }
  } else {
    cout << "Vamos todos encontrar a montanha!";
  }
}
