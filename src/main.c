#include <errno.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// criar uma função em C para cada coisa que fiz
int main() {
  int file_size;
  unsigned char *dados_imagem;
  char *nome_arquivo = "imagens/casa-geometria.bmp";
  FILE *file_pointer = NULL;
  // Abre o arquivo
  file_pointer = fopen(nome_arquivo, "rb");
  // Se deu erro ao abrir, retorna
  if (file_pointer == NULL) {
    printf("Erro ao abrir o arquivo: %i", errno);
    return 1;
  }
  fseek(file_pointer, 0L, SEEK_END);
  // Pega o índice do ponteiro
  file_size = ftell(file_pointer);
  printf("O tamanho do arquivo é de %i bytes\n", file_size);
  // 3. Aloca memória para o array de bytes
  // dados_imagem = (unsigned char *)malloc(file_size * sizeof(unsigned char));

  // free(dados_imagem);
  return 0;
}
