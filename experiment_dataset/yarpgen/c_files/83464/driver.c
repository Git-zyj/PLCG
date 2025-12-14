#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2247535943521013108LL;
int zero = 0;
unsigned long long int var_20 = 13202793105158583420ULL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1616884323U;
unsigned short var_23 = (unsigned short)41574;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
