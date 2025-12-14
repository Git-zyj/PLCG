#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)235;
short var_8 = (short)12220;
int zero = 0;
short var_15 = (short)12152;
unsigned short var_16 = (unsigned short)59805;
unsigned short var_17 = (unsigned short)16167;
unsigned long long int var_18 = 14418796640133853646ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
