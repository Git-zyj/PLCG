#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)19;
int var_9 = 1895864920;
unsigned short var_12 = (unsigned short)19266;
unsigned int var_13 = 1005645195U;
int zero = 0;
unsigned long long int var_14 = 15565149743728738873ULL;
unsigned int var_15 = 1568474450U;
unsigned int var_16 = 489447897U;
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
