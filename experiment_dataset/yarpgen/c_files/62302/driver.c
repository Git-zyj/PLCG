#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -3729103978676297335LL;
unsigned int var_8 = 3487539755U;
int var_11 = 1996969440;
int zero = 0;
signed char var_16 = (signed char)32;
unsigned long long int var_17 = 2330310800343105911ULL;
void init() {
}

void checksum() {
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
