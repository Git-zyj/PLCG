#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-93;
unsigned long long int var_6 = 15612281488611583064ULL;
int var_7 = 2000077214;
long long int var_10 = 9038660686801298680LL;
int zero = 0;
signed char var_14 = (signed char)63;
signed char var_15 = (signed char)-68;
signed char var_16 = (signed char)-17;
signed char var_17 = (signed char)-15;
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
