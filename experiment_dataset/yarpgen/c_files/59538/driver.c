#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)159;
int var_11 = 1658709942;
signed char var_15 = (signed char)-78;
int zero = 0;
int var_20 = 1937884713;
unsigned char var_21 = (unsigned char)58;
unsigned long long int var_22 = 15285698503186948677ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
