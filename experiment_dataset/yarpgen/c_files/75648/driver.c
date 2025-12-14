#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2166742761595236454LL;
unsigned char var_3 = (unsigned char)83;
unsigned int var_5 = 686773302U;
int zero = 0;
unsigned int var_11 = 3221312749U;
unsigned char var_12 = (unsigned char)8;
_Bool var_13 = (_Bool)0;
int var_14 = 558709402;
unsigned int var_15 = 2354179849U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
