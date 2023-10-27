#include "tree.hpp"
#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int precedencia(char operador) {
    if (operador == '^')
        return 3;
    else if (operador == '*' || operador == '/')
        return 2;
    else if (operador == '+' || operador == '-')
        return 1;
    else
        return 0;
}

string infija_a_postfija(string expresion) {
    stack<char> pila;
    string salida;

    for (char token : expresion) {
        if (isalnum(token)) {
            salida += token;
        } else if (token == '(') {
            pila.push(token);
        } else if (token == ')') {
            while (!pila.empty() && pila.top() != '(') {
                salida += pila.top();
                pila.pop();
            }
            pila.pop();
        } else {
            while (!pila.empty() && precedencia(token) <= precedencia(pila.top())) {
                salida += pila.top();
                pila.pop();
            }
            pila.push(token);
        }
    }

    while (!pila.empty()) {
        salida += pila.top();
        pila.pop();
    }

    return salida;
}

string voltearString(string str) {
    int izquierda = 0;
    int derecha = str.length() - 1;

    while (izquierda < derecha) {
        swap(str[izquierda], str[derecha]);
        izquierda++;
        derecha--;
    }

    return str;
}

string unirVectorDeStrings(const vector<string>& vectorDeStrings) {
    string resultado;
    for (const string& str : vectorDeStrings) {
        resultado += str;
    }
    if (!resultado.empty()) {
        resultado.erase(resultado.length());
    }
    return resultado;
}

int main() {
    Tree tree;
    vector <string> vector;
    string infix;
    string prefix;
    while(1) {
        cin >> infix;
        if (infix == "tree") {
            break;
        }
        vector.push_back(infix);
    }

    string final;

    cout << "Saliendo del ciclo" << endl;
    prefix = unirVectorDeStrings(vector);
    prefix = infija_a_postfija(prefix);
    prefix = voltearString(prefix);
    cout << prefix << endl;
    TreeNode * root = new TreeNode(prefix[0]);
    tree.setRoot(root);
    for (int i = 0; i < prefix.length()-2; i++) {
        tree.insert(prefix[i+1], prefix[i]);
        tree.insert(prefix[i+2], prefix[i]);
    }
    tree.traverse();
    return 0;
}