#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)22326;
unsigned char var_5 = (unsigned char)1;
long long int var_6 = -9076127195864293174LL;
signed char var_12 = (signed char)47;
int zero = 0;
unsigned char var_13 = (unsigned char)189;
unsigned char var_14 = (unsigned char)130;
unsigned long long int var_15 = 2397621532814838578ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
