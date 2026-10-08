#include <windows.h>
#include <iostream>

using namespace std;

int main() 
{
    SetConsoleOutputCP(CP_UTF8);
    char novoCliente = 's';

    do{
        int i, saldo, saque;
        int saques[100];
        int nota100[100];
        int nota50[100];
        int nota20[100];
        int nota10[100];
        int nota5[100];
        int nota2[100];
        int quantidadeSaques = 0;
        int totalSacado = 0;
        // 1. Atendimento do cliente
        // saldo , inicialização do extrato
        system("cls");
        cout << "=== CAIXA ELETRÔNICO — NOVO CLIENTE ===" << endl;
        cout << "Digite o saldo disponível: R$ ";
        cin >> saldo;
        cout << "Saldo disponível: R$ " << saldo << ",00" << endl;
        i = 0;
        // 2. Loop dos saques
        do{
            cout << "Valor do saque (0 para encerrar o atendimento): R$ ";
            cin >> saque;
            nota100[i] = 0;
            nota50[i] = 0;
            nota20[i] = 0;
            nota10[i] = 0;
            nota5[i] = 0;
            nota2[i] = 0;
            if (saque > saldo){
                cout << "Valor do saque inválido! Digite o valor do saque novamente: R$";
                cin >> saque;
            } else {
                saques[i] = saque;
                quantidadeSaques++;
                totalSacado += saque;
                if (saque != 0 && saque <= saldo) {
                    nota100[i] = saque / 100;
                    saque = saque - nota100[i] * 100;
                    saldo -= nota100[i] * 100;
                    if (saque != 0 && saque <= saldo) {
                        nota50[i] = saque / 50;
                        saque = saque - nota50[i] * 50;
                        saldo -= nota50[i] * 50;
                        if (saque != 0 && saque <= saldo) {
                            nota20[i] = saque / 20;
                            saque = saque - nota20[i] * 20;
                            saldo -= nota20[i] * 20;
                            if (saque != 0 && saque <= saldo) {
                                nota10[i] = saque / 10;
                                saque = saque - nota10[i] * 10;
                                saldo -= nota10[i] * 10;
                                if (saque != 0 && saque <= saldo) {
                                    nota5[i] = saque / 5;
                                    saque = saque - nota5[i] * 5;
                                    saldo -= nota5[i] * 5;
                                    if (saque != 0 && saque <= saldo) {
                                        nota2[i] = saque / 2;
                                        saque = saque - nota2[i] * 2;
                                        saldo -= nota2[i] * 2;
                                    }
                                }
                            }
                        }
                    }
                }
                cout << "Notas entregues: " << nota100[i] << "x R$100, " << nota50[i] << "x R$50, " << nota20[i] << "x R$20, " << nota10[i] << "x R$10, " << nota5[i] << "x R$5, " << nota5[i] << "x R$2." << endl;
                i++;
            }
        }
        while (saldo != 0);
        // 3. Encerramento
        // imprimir extrato
        // perguntar se atende outro cliente
        cout << "--------- EXTRATO DA SESSÃO ---------" << endl;
        cout << "Saques realizados: " << endl;
        for (int j = 0; j < quantidadeSaques; j++){
            cout << "Saque " << j+1 << " R$ " << saques[j] << endl;
        }
        cout << "-------------------------------------" << endl;
        cout << "TOTAL SACADO: R$ " << totalSacado << endl;
        cout << "SALDO RESTANTE: R$ " << saldo << endl;
        cout << "Deseja atender novo cliente? (S/N): ";
        cin >> novoCliente;
    }
    while (tolower(novoCliente) == 's');
    cout << "Obrigado por utilizar o Caixa Eletrônico!" << endl;

    return 0;

}