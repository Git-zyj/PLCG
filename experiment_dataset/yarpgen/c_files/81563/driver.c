#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14027702828554608379ULL;
unsigned short var_5 = (unsigned short)65448;
int zero = 0;
int var_15 = 1270462385;
signed char var_16 = (signed char)-97;
signed char var_17 = (signed char)80;
signed char var_18 = (signed char)63;
int var_19 = 1898211780;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
