#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11106355887196994876ULL;
unsigned long long int var_6 = 17797158538296069476ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 1389803789U;
short var_11 = (short)24673;
int var_12 = 909720923;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
