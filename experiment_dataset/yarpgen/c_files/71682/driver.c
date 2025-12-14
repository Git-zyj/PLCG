#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 576081181U;
long long int var_3 = -2181921012632991930LL;
long long int var_4 = -9127843516379588464LL;
unsigned int var_6 = 3410306461U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 11518512392783225126ULL;
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
