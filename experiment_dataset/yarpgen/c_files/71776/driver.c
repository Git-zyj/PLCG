#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-116;
int var_3 = 1311189015;
unsigned int var_8 = 2447033295U;
short var_9 = (short)-16434;
unsigned long long int var_10 = 3176219412949331835ULL;
unsigned char var_11 = (unsigned char)240;
int zero = 0;
unsigned char var_14 = (unsigned char)45;
long long int var_15 = -8665342216910411669LL;
long long int var_16 = 8154801808314368317LL;
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
