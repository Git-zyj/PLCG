#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -169624532;
unsigned long long int var_6 = 13352282193856368664ULL;
unsigned long long int var_10 = 10720308112601722141ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = -702667448;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
