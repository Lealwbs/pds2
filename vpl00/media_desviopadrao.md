Você devera implementar um programa que leia um conjunto de n números (do tipo float) e calcule a média aritmética e o desvio padrão desses números. Para isso você deverá implementar duas funções, uma que calcula a média e outra que calcula o desvio padrão. As equações são as seguintes:

dado um conjunto de n números, representados por x_1, x_2, \dots ,x_n a média aritmética é dada por:

ma = \frac{\sum_i^n x_i}{n}
Já o desvio padrão é dado por:

dp = \sqrt{\frac{\sum_i^n (x_i-ma)^2}{n}}
O seu programa deverá ler o valor de n, em seguida o valor dos n números x_1, x_2, \dots ,x_n e calcular e imprimir em linhas separadas a média e o desvio padrão.

Exemplo:

Entrada:
3
1.55 1.70 1.80

Saída:
1.6833
0.1027