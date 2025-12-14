#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2135019914;
_Bool var_2 = (_Bool)1;
_Bool var_6 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 2598922866781902742ULL;
int zero = 0;
unsigned long long int var_14 = 10778769164699896352ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
