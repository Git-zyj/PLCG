#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 175753332U;
unsigned long long int var_2 = 16882851377908671541ULL;
_Bool var_3 = (_Bool)1;
int var_4 = -964315114;
unsigned short var_11 = (unsigned short)15751;
int zero = 0;
short var_14 = (short)-167;
unsigned char var_15 = (unsigned char)50;
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
