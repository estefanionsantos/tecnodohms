# jogo da forca (hangman game)

1. **Função** `clearScreen()`: Limpa a tela em diferentes sistemas operacionais (Windows, Linux, Mac).
2. **Função** `drawHangman()`: Mostra a forca e o progresso da palavra que o jogador está tentando adivinhar. A forca tem 7 estágios, representando os erros do jogador.
3. **Função** `getRandomWord()`: Escolhe uma palavra aleatória de uma lista pré-definida de palavras.
4. **Função** `playHangman()`: Lógica principal do jogo da forca. O jogador adivinha uma letra por vez:
- Valida se a letra já foi adivinhada.
- Atualiza o progresso da palavra se a letra for correta.
- Se a letra não estiver na palavra, o número de erros (wrongGuesses) aumenta.
- O jogo continua até o jogador vencer (adivinhando todas as letras) ou perder (atingir 6 erros).
5. **Validação de entrada**: O jogo aceita apenas letras como entrada e converte todas para minúsculas.
6. **Finalização do jogo**: Quando o jogador adivinhar a palavra ou atingir o limite de erros, o jogo termina.

### Como rodar:
1. Salve o código em um arquivo chamado main.cpp.
2. Compile o código usando um compilador C++:

```
$ g++ main.cpp -o forca
```

3. Execute o jogo
```
$ ./forca
```

