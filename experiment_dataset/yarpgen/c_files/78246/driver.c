#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 549736477636389404LL;
signed char var_4 = (signed char)-117;
unsigned int var_7 = 1403331112U;
unsigned short var_10 = (unsigned short)43856;
unsigned int var_15 = 2091425042U;
int zero = 0;
short var_16 = (short)7673;
unsigned int var_17 = 1478939465U;
unsigned int var_18 = 3856210455U;
unsigned int var_19 = 2572847903U;
short var_20 = (short)-26531;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
