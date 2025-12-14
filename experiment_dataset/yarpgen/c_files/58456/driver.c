#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)32;
unsigned long long int var_3 = 4860325399295732143ULL;
int var_4 = 248331477;
int var_8 = 1087424908;
signed char var_9 = (signed char)-91;
unsigned int var_11 = 3558802252U;
int zero = 0;
int var_14 = -1736176759;
unsigned int var_15 = 751547321U;
long long int var_16 = 4759176873337016405LL;
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
