#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)1;
unsigned short var_1 = (unsigned short)62260;
unsigned long long int var_7 = 184625456897330227ULL;
long long int var_10 = -5376286105940656168LL;
long long int var_13 = 7195646593327177220LL;
int zero = 0;
signed char var_16 = (signed char)14;
unsigned short var_17 = (unsigned short)44964;
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
