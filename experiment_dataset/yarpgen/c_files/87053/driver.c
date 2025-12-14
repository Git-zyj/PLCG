#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1526847883U;
unsigned char var_6 = (unsigned char)72;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)89;
unsigned char var_10 = (unsigned char)4;
unsigned int var_12 = 2026853515U;
unsigned int var_16 = 1316706580U;
int zero = 0;
unsigned char var_17 = (unsigned char)84;
long long int var_18 = 1947626608222406197LL;
_Bool var_19 = (_Bool)0;
int var_20 = 1916384779;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
