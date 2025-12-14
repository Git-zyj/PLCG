#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
unsigned long long int var_5 = 18092423920439644875ULL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 7876354293123824394ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_16 = (short)-17937;
unsigned char var_17 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
