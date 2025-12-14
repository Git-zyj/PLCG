#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 233559028455656447LL;
unsigned int var_11 = 3939551086U;
unsigned char var_13 = (unsigned char)233;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = 1679708836;
int var_18 = -344293425;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
