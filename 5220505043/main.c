//
//  main.c
//  5220505043
//
//  Created by mavlyuda almazova on 10.12.2023.
//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
  char *metin;
  int anahtar = 2;

  // dosyayı açar.
  FILE *dosya = fopen("output.txt", "r");
  if (dosya == NULL) {
      printf ("dosya açılamadı");
    return 1;
  }

  // dosyayı okucaktır.
  metin = malloc(sizeof(char) * 1024);
  fgets(metin, sizeof(metin), dosya);

  // dosyayı kapat.
  fclose(dosya);

  // metni çöz.
  for (int i = 0; metin[i] != '\0'; i++) {
    metin[i] = (metin[i] - anahtar) % 26;
  }

  // çözülen metni yazdırcaktır.
  printf("%s\n", metin);

  return 0;
}
