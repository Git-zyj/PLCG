#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 34105729545895536LL;
unsigned long long int var_11 = 8505625099016096078ULL;
unsigned char var_14 = (unsigned char)177;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 2411900483510870219ULL;
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
