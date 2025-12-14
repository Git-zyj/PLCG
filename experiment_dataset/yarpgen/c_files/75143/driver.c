#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4077526902U;
_Bool var_4 = (_Bool)1;
long long int var_9 = -3011421176198715637LL;
unsigned long long int var_10 = 12906613479650633704ULL;
unsigned char var_12 = (unsigned char)176;
unsigned char var_13 = (unsigned char)85;
unsigned int var_16 = 1828027710U;
int zero = 0;
unsigned int var_18 = 3439337634U;
unsigned short var_19 = (unsigned short)13527;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
