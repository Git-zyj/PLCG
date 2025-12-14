#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2186523534191617807ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 1540664074U;
unsigned int var_10 = 156036366U;
unsigned short var_14 = (unsigned short)58499;
int zero = 0;
unsigned short var_15 = (unsigned short)5217;
unsigned long long int var_16 = 12526261915053051710ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
