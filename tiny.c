#include <stdio.h>

int main(int argc, char** argv){
  if(argc != 2) return 1;
  
  unsigned long sz = 0;
  FILE* fp = fopen(argv[1], "rb");
  fseek(fp, 0, SEEK_END);
  sz = ftell(fp); // What's the position here?

  unsigned char f[sz];
  fread(f, sizeof(f), 1, fp);

  for(unsigned long i = 0; i < sz; i++) {
    if(i % 8 == 0) printf("\n");
    else {
      if(f[i] < 0x10) printf("0%x ", f[i]);
      else printf("%x ", f[i]);
    }
  }
}