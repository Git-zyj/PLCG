#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3974904339U;
unsigned long long int var_6 = 1348792459345753709ULL;
long long int var_7 = -7025483395625948485LL;
int var_8 = 395287601;
short var_11 = (short)27366;
unsigned long long int var_13 = 10694540091317748265ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)19576;
unsigned short var_15 = (unsigned short)28552;
signed char var_16 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
