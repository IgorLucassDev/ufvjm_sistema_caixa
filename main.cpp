 #include <iostream>
 #include<string>
 using namespace std;

int main()
{
    // 1. Atendimento do cliente
    // saldo , inicialização do extrato

    double saque,saldo;

    int notas100,notas50,notas20,notas10,notas5,notas2;

    cout << "\n=== Caixa Eletronico ===\n";

    cout << "Saldo disponivel: " ;
    cin >> saldo;

    if(saldo < 0){

        cout << "Saldo invalido" << endl;

    }else{

        cout << "Valor do saque: " << endl;
        cin >> saque;

        if(saque <= 0){

            cout << "Saldo invalido" << endl;

        }else if(saque > saldo){

            cout << "Saldo insuficiente" << endl;

        } 

    }

    
    //2. Loop dos saques




    //3. Encerramento
    // imprimir extrato
    // perguntar se atende outro cliente


    return 0;

}
