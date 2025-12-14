#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3137460185014155273LL;
unsigned int var_4 = 2326881344U;
unsigned int var_8 = 3835704985U;
unsigned char var_9 = (unsigned char)62;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 17747559963128556428ULL;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
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
