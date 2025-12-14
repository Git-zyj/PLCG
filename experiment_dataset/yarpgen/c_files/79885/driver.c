#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -824174384;
int var_5 = -1054779118;
unsigned long long int var_10 = 9112594242691243141ULL;
int zero = 0;
signed char var_14 = (signed char)-45;
unsigned short var_15 = (unsigned short)3037;
unsigned short var_16 = (unsigned short)19181;
signed char var_17 = (signed char)23;
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
