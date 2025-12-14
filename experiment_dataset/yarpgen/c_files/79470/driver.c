#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4233382254U;
unsigned long long int var_5 = 15745841640602740718ULL;
_Bool var_10 = (_Bool)0;
unsigned char var_13 = (unsigned char)172;
int zero = 0;
int var_16 = -2096624942;
unsigned int var_17 = 1780308277U;
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
