# super-trunfo-Desenvolvendo-a-Logica
Super Trunfo Avançado

Programa em C que compara duas cartas de cidades usando dois atributos escolhidos pelo jogador, mostrando qual carta vence ou se houve empate.

Funcionalidades

Cadastro de duas cartas com informações:

Estado (A-H)

Código da carta

Cidade

População

Área (km²)

PIB

Pontos turísticos

Cálculo automático de:

Densidade demográfica

PIB per capita

Super poder da carta

Escolha de dois atributos diferentes para comparação

Comparação detalhada com vencedor por atributo

Soma dos atributos escolhidos para determinar vencedor final

Tratamento de empate

Atributos disponíveis para comparação

População

Área

PIB

Pontos turísticos

Densidade demográfica (menor vence)

PIB per capita

Como compilar

No terminal, dentro da pasta do projeto:

gcc super_trunfo.c -o super_trunfo


Isso gera o executável super_trunfo.

Como executar
./super_trunfo


O programa pedirá que você informe os dados das cartas e escolha dois atributos para comparar.

Exemplo de uso
### CARTA 1 ###
Estado: A
Código: A01
Cidade: Cidade1
População: 458304
Área: 1029.96
PIB: 39049505.83
Pontos turísticos: 1

### CARTA 2 ###
Estado: B
Código: B02
Cidade: Cidade2
População: 567642
Área: 588.39
PIB: 37353019.82
Pontos turísticos: 12

Escolha dois atributos para comparar:
Primeiro atributo: 1
Segundo atributo: 5

Atributo 1: Carta 2 venceu
Atributo 2: Carta 1 venceu
Soma dos atributos: Carta 1 = 457859.03 | Carta 2 = 566677.26
Resultado final: Carta 2 venceu

Observações

Densidade demográfica é invertida: vence quem tiver menor valor.

Para os outros atributos, vence quem tiver maior valor.

O programa foi feito para aprendizado e prática de estruturas de decisão, menus dinâmicos e comparações avançadas em C.
