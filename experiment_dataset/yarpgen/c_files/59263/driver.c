#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_5 = -5213507014627294833LL;
long long int var_13 = 6139085199110344898LL;
int zero = 0;
unsigned long long int var_15 = 10369134274455463799ULL;
long long int var_16 = -9208852508522920837LL;
int var_17 = 1254088722;
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
