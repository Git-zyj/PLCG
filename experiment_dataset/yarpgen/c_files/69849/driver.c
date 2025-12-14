#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8702080145849730626ULL;
unsigned long long int var_4 = 1172158066078036483ULL;
unsigned int var_5 = 4244570689U;
unsigned int var_11 = 1466697404U;
int zero = 0;
unsigned long long int var_13 = 653477355699520151ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
