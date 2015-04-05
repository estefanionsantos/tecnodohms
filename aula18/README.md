#AULA 18 [revisão]

##Exercício 1
* Faça um algoritmo que leia 10 valores
INTEIROS e POSITIVOS do teclado.
*Este algoritmo deve chamar uma função de
nome “verifica_par_impar" que recebe o
número lido como parâmetro e retorne se o
mesmo é par ou impar.
*Ao final, deve ser exibido na tela a soma de
todos os números pares digitados e
verificados pela função.

##Exercício 2
* Faça um algoritmo que receba do teclado a nota de uma prova (0,0 até 10,0).
* Valide se a nota digitada está dentro do limite possível, ou seja 0,0 até 10,0.
* Caso não esteja informe o usuário que o mesmo deve digitar outra nota que esteja
neste intervalo, até que uma nota válida seja digitada.
* A seguir envie esta nota como parâmetro para uma função chamada “verifica_nota”
* Esta função deve receber a nota e verificar o conceito do aluno, conforme a tabela
abaixo:

<table>
	<tr>
		<td>Nota</td>
		<td>Conceito</td>
	</tr>

	<tr>
		<td>de 0,0 a 4,9</td>
		<td>D</td>
	</tr>
	<tr>
		<td>de 5,0 a 6,9</td>
		<td>C</td>
	</tr>
	<tr>
		<td>de 7,0 a 8,9</td>
		<td>B</td>
	</tr>
	<tr>
		<td>de 9,0 a 10,0</td>
		<td>A</td>
	</tr>
</table>

* Em seguida, a função deve retornar o conceito do aluno para a função principal
(main) que irá verificar se o aluno foi aprovado ou reprovado e então exibir o conceito
na tela, juntamente com a informação da aprovação ou reprovação do aluno.
*O aluno só é reprovado caso tenha obtido o conceito D.

##Exercício 3
Escrever um algoritmo que leia um valor para uma
variável __n__ e passe esse valor como parâmetro para
uma função chamada “tabuada” que deve calcular e
mostrar a tabuada completa (de 1 ao 10) de 1 até o
número __n__. Mostre a tabuada na forma: Ex: __n = 3__.

##Exercício 4
* Faça um algoritmo que gere aleatoriamente um
vetor com 20 elementos inteiros, de 0 a 99.
* O valor 20 deve ser definido através de uma
constante (Ex. #define ou const)
* Exiba os elementos gerados na tela.
* Em seguida receba um valor inteiro pelo teclado
e verifique quantas vezes este valor existe no
vetor, informando a posição (índice) em que o
mesmo se encontra.

##Exercício 5
* Faça um algoritmo que gere duas matrizes 10x10
aleatoriamente com valores inteiros, entre 0 a 20.
* Exiba na tela as duas matrizes, com seus respectivos índices
de linha, coluna e o valor gerado.
* A seguir, exiba uma matriz resultante, que deve somar ou
subtrair os elementos das respectivas posições da matriz de
acordo com as seguintes condições:

-- Somar os elementos da matriz A e B, caso ambos os
elementos forem menores do que 10;

-- Subtrair os elementos da matriz A e B, caso pelo menos
um dos valores for maior ou igual a 10.