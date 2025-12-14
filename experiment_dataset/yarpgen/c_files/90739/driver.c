#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1347629066579689999ULL;
unsigned char var_2 = (unsigned char)239;
long long int var_4 = -7063844387378085996LL;
long long int var_13 = 5797964626631332188LL;
int zero = 0;
unsigned int var_15 = 2118915069U;
_Bool var_16 = (_Bool)0;
int var_17 = 517855122;
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
