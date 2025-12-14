#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-103;
signed char var_6 = (signed char)8;
int var_12 = 597604074;
unsigned long long int var_13 = 644918850402755704ULL;
int zero = 0;
short var_15 = (short)30999;
long long int var_16 = -3673760890894669904LL;
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
