#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33661;
unsigned int var_4 = 2269063752U;
unsigned int var_6 = 554519758U;
unsigned short var_7 = (unsigned short)24683;
unsigned char var_11 = (unsigned char)131;
int zero = 0;
unsigned long long int var_14 = 17213130319543632360ULL;
unsigned char var_15 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
