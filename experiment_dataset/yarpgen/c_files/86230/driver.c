#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
signed char var_7 = (signed char)-21;
unsigned long long int var_8 = 14106708247976524498ULL;
signed char var_10 = (signed char)-94;
int zero = 0;
unsigned short var_15 = (unsigned short)49154;
unsigned long long int var_16 = 14981859093195969459ULL;
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
