#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -370907851;
unsigned int var_7 = 1197261U;
short var_9 = (short)23051;
unsigned short var_10 = (unsigned short)52941;
int zero = 0;
unsigned long long int var_14 = 11227149165504037302ULL;
short var_15 = (short)1598;
signed char var_16 = (signed char)-82;
long long int var_17 = 1584867837182520628LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
