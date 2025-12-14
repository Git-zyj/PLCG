#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5106296770573855368LL;
unsigned char var_1 = (unsigned char)227;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)69;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -6329266848720447980LL;
unsigned int var_13 = 3332483563U;
unsigned int var_14 = 234393199U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
