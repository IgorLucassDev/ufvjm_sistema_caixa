#include <iostream>
#include <limits>

using namespace std;

int main()
{
    char outro_cliente = 's';

    while (outro_cliente == 's' || outro_cliente == 'S')
    {
        int saldo_cliente;

        // VALIDAÇÃO DO SALDO
        // Querido futuro programador, por algum motivo nessa linguagem do inferno, se voce digitar o saldo do cliente(int) como um texto, tipo 'a' o codigo simplesente entra em loop infinito! :D
        // Abaixo coloquei validação manual em todas as entradas pra evitar.
        while (true)
        {
            cout << "\nInforme o saldo do cliente: ";
            cin >> saldo_cliente;

            if (cin.fail() || saldo_cliente < 0)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Entrada invalida! Por favor, digite um numero positivo.\n";
            }
            else
            {
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de quebras de linha extras
                break;
            }
        }

        int saque_cliente = -1;

        while (saque_cliente != 0)
        {
            // VALIDAÇÃO DO SAQUE
            while (true)
            {
                cout << "\nInforme quanto deseja sacar (0 para encerrar): ";
                cin >> saque_cliente;

                if (cin.fail() || saque_cliente < 0)
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Entrada invalida! Por favor, digite um numero de saque positivo.\n";
                }
                else
                {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
            }

            if (saque_cliente == 0)
            {
                break;
            }

            // Para raul
            // ..
            // Para Extrato
        }

        cout << "\nDeseja atender outro cliente? (s/n): ";
        cin >> outro_cliente;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        while (outro_cliente != 's' && outro_cliente != 'S' && outro_cliente != 'n' && outro_cliente != 'N')
        {
            cout << "\nEntrada errada! selecione uma opção (s/n): ";
            cin >> outro_cliente;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    cout << "\nPrograma encerrado com sucesso!\n";
    return 0;
}
