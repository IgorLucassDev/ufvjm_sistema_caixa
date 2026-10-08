# ufvjm_sistema_caixa

Sistema super simples de controle de saldo e saques desenvolvido em C++ para fins acadêmicos. O projeto simula o atendimento de clientes em um caixa de mercado, permitindo definir um saldo inicial e realizar múltiplos saques até o encerramento da sessão do cliente.

## Funcionalidades

* Definição de saldo inicial do cliente.
* Realização de múltiplos saques consecutivos.
* Validação rigorosa de entradas para evitar travamentos (como digitação de letras em campos numéricos).
* Opção para alternar ou encerrar o atendimento de novos clientes.

## Como Executar o Projeto

Você precisará de um compilador C++ (como o GCC/G++) instalado em sua máquina.

1. Abra o terminal na pasta onde o arquivo `main.cpp` está salvo.
2. Compile o código com o seguinte comando:
   ```bash
   g++ main.cpp -o sistema_caixa
   ```
3. Execute o programa:
   ```bash
   ./sistema_caixa
   ```

## Notas de Desenvolvimento

Durante a construção do software, foi identificada uma limitação no comportamento padrão do `std::cin` em C++: quando uma variável do tipo inteira (`int`) recebe um caractere de texto (como 'a'), o fluxo de entrada falha, gerando um loop infinito se não houver tratamento. 

Para resolver isso, o sistema implementa validações manuais utilizando as funções `cin.fail()`, `cin.clear()` e `cin.ignore()`, limpando o buffer do teclado e garantindo a estabilidade da aplicação contra entradas inválidas.

## Contribuição



Este é um projeto universitário simples criado para consolidar lógica de programação e estruturas de repetição em C++. Fique à vontade para clonar, abrir issues ou enviar pull requests com melhorias (como a implementação das funções pendentes de extrato).

## Desenvolvedores

* **Igor Lucas** - [@IgorlucassDev](https://github.com)
* **Raul** - [@Raul7Dev](https://github.com)
* **Matheus Granzotto** - [@mhgranzotto](https://github.com)


