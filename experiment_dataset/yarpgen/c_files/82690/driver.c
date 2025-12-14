#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24961;
short var_2 = (short)14897;
unsigned long long int var_3 = 5360549580990742754ULL;
unsigned short var_6 = (unsigned short)45159;
short var_12 = (short)-8503;
unsigned int var_13 = 255151239U;
unsigned short var_14 = (unsigned short)5718;
int zero = 0;
unsigned short var_15 = (unsigned short)19221;
unsigned short var_16 = (unsigned short)49940;
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
