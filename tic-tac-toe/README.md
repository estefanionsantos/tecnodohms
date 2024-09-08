# Tic tac toe (jogo da velha)

1. **Tabuleiro**: Representado por uma matriz 3x3 de caracteres, inicialmente preenchida com '-' para indicar posições vazias.

```
 + 1 2 3 
 1 - - - 
 2 - - - 
 3 - - - 

PLAYER 'X', digite a linha e coluna (n n): 
```

2. **Funções**:
- `printBoard`: Mostra o tabuleiro no terminal.
- `checkWinner`: Verifica se o jogador atual completou uma linha, coluna ou diagonal.
- `isBoardFull`: Verifica se todas as posições do tabuleiro estão preenchidas.

3. **Loop do jogo**: Alterna entre os jogadores 'X' e 'O' até que um jogador vença ou o jogo termine em empate.

4. **Entrada do jogador**: Cada jogador insere as coordenadas (linha e coluna) para marcar sua jogada.  
exemplo: 1 2  
onde "1" é a posição da linha e "2" a posição da coluna  
ficaria:
```
PLAYER 'X', digite a linha e coluna (n n): 1 2

 + 1 2 3 
 1 - X - 
 2 - - - 
 3 - - - 

```

### para compilar
```
$ g++ main.cpp -o jogo-da-velha
$ ./jogo-da-velha
```
