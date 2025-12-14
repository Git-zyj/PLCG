#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -330884022;
int var_10 = -1047356255;
unsigned int var_13 = 1806781178U;
int zero = 0;
unsigned char var_15 = (unsigned char)124;
int var_16 = -1372652204;
long long int var_17 = -8360934371709556962LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
