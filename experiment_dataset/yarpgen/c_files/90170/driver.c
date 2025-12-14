#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)195;
signed char var_10 = (signed char)-70;
long long int var_11 = 7919842734411170956LL;
int zero = 0;
unsigned long long int var_15 = 17350787327119730882ULL;
unsigned int var_16 = 2025360353U;
short var_17 = (short)5477;
void init() {
}

void checksum() {
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
