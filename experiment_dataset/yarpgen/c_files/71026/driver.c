#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)35830;
unsigned short var_7 = (unsigned short)18330;
unsigned long long int var_9 = 8754617474291476270ULL;
long long int var_11 = -5783006708828135090LL;
unsigned long long int var_14 = 9833699305822570097ULL;
unsigned int var_15 = 29217472U;
unsigned int var_16 = 2006337217U;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 9359296854865434648ULL;
unsigned int var_19 = 1150495457U;
unsigned int var_20 = 1555876592U;
unsigned int var_21 = 4052439353U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
