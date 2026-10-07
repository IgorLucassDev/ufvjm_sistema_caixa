 #include <iostream>
 #include<string>
 using namespace std;

int main()
{
    // 1. Atendimento do cliente
    // saldo , inicialização do extrato

    double saldo_disponivel,saque_cliente,total_sacado;
    int valor;
    int opcao_nota;

    cout << "Saldo disponivel: " << endl;
    cin >> saldo_disponivel;

    if(saldo_disponivel <= 0){

        cout << "Valor invalido" << endl;
        cout << "Digite o saldo novamente: " << endl;
        cin >> saldo_disponivel;

    }

    cout << "Selecione a opcao de saque (1,2,3,4,5,6): " << endl;
    cin >> opcao_nota;

    switch (opcao_nota)
    {
    case 1:
        saque_cliente = 100;
        saldo_disponivel = saldo_disponivel - saque_cliente;
        break;

    case 2:
        saque_cliente = 50;
        saldo_disponivel = saldo_disponivel - saque_cliente;
        break;

    case 3:
        saque_cliente = 20;
        saldo_disponivel = saldo_disponivel - saque_cliente;
        break;

    case 4:
        saque_cliente = 10;
        saldo_disponivel = saldo_disponivel - saque_cliente;
        break;

    case 5:
        saque_cliente = 5;
        saldo_disponivel = saldo_disponivel - saque_cliente;
        break;

    case 6:
        saque_cliente = 2;
        saldo_disponivel = saldo_disponivel - saque_cliente;
        break;
    
    default:
        break;
    }




    //2. Loop dos saques




    //3. Encerramento
    // imprimir extrato
    // perguntar se atende outro cliente


    return 0;

}
