#include <iostream>
#include <limits>
#include <cctype>

using namespace std;

int main()
{
    char outro_cliente = 's';

    while (outro_cliente == 's' || outro_cliente == 'S')
    {
        // 1. Atendimento do cliente
        // saldo , inicialização do extrato

        int saldo;
        int saque;

        int notas100, notas50, notas20, notas10, notas5, notas2;

        // Variáveis para o extrato
        int saques[100];
        int quantidadeSaques = 0;
        int totalSacado = 0;

        cout << "\n=== Caixa Eletronico ===\n";

        // VALIDAÇÃO DO SALDO
        // Querido futuro programador, por algum motivo nessa linguagem do inferno,
        // se voce digitar o saldo do cliente(int) como um texto, tipo 'a' o codigo
        // simplesente entra em loop infinito! :D
        // Abaixo coloquei validação manual em todas as entradas pra evitar.

        while (true)
        {
            cout << "\nInforme o saldo do cliente: ";
            cin >> saldo;

            if (cin.fail() || saldo < 0)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Entrada invalida! Por favor, digite um numero positivo.\n";
            }
            else
            {
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
            }
        }

        // 2. Loop dos saques

        saque = -1;

        while (saque != 0)
        {
            // VALIDAÇÃO DO SAQUE
            while (true)
            {
                cout << "\nInforme quanto deseja sacar (0 para encerrar): ";
                cin >> saque;

                if (cin.fail() || saque < 0)
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

            if (saque == 0)
            {
                break;
            }

            // Verifica se o cliente possui saldo suficiente
            if (saque > saldo)
            {
                cout << "Saldo insuficiente!\n";
                continue;
            }

            // Para raul
            // ..
            // Logica para calcular as notas do saque

            int restante = saque;

            notas100 = restante / 100;
            restante = restante % 100;

            notas50 = restante / 50;
            restante = restante % 50;

            notas20 = restante / 20;
            restante = restante % 20;

            notas10 = restante / 10;
            restante = restante % 10;

            notas5 = restante / 5;
            restante = restante % 5;

            notas2 = restante / 2;
            restante = restante % 2;

            // Se restar algum valor, o saque não pode ser realizado
            if (restante != 0)
            {
                cout << "Saque invalido! O valor nao pode ser formado "
                     << "com as notas disponiveis.\n";
                continue;
            }

            // Mostra as notas entregues
            cout << "\nSaque realizado com sucesso!\n";

            if (notas100 > 0)
                cout << notas100 << " nota(s) de R$ 100\n";

            if (notas50 > 0)
                cout << notas50 << " nota(s) de R$ 50\n";

            if (notas20 > 0)
                cout << notas20 << " nota(s) de R$ 20\n";

            if (notas10 > 0)
                cout << notas10 << " nota(s) de R$ 10\n";

            if (notas5 > 0)
                cout << notas5 << " nota(s) de R$ 5\n";

            if (notas2 > 0)
                cout << notas2 << " nota(s) de R$ 2\n";

            // Atualiza o saldo somente depois que o saque foi aprovado
            saldo -= saque;

            // Para Extrato
            saques[quantidadeSaques] = saque;
            quantidadeSaques++;
            totalSacado += saque;

            cout << "Saldo restante: R$ " << saldo << endl;
        }

        // 3. Encerramento
        // imprimir extrato
        // perguntar se atende outro cliente

        cout << "\n--------- EXTRATO DA SESSAO ---------" << endl;
        cout << "Saques realizados: " << endl;

        if (quantidadeSaques == 0)
        {
            cout << "Nenhum saque realizado." << endl;
        }
        else
        {
            for (int j = 0; j < quantidadeSaques; j++)
            {
                cout << "Saque " << j + 1 << ": R$ " << saques[j] << endl;
            }
        }

        cout << "-------------------------------------" << endl;
        cout << "TOTAL SACADO: R$ " << totalSacado << endl;
        cout << "SALDO RESTANTE: R$ " << saldo << endl;

        cout << "\nDeseja atender outro cliente? (s/n): ";
        cin >> outro_cliente;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        while (outro_cliente != 's' && outro_cliente != 'S' &&
               outro_cliente != 'n' && outro_cliente != 'N')
        {
            cout << "\nEntrada errada! Selecione uma opcao (s/n): ";
            cin >> outro_cliente;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    cout << "\nObrigado por utilizar o Caixa Eletronico!" << endl;
    cout << "Programa encerrado com sucesso!\n";

    return 0;
}
