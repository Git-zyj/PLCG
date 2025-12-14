#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)230;
unsigned char var_4 = (unsigned char)78;
unsigned char var_6 = (unsigned char)209;
unsigned long long int var_8 = 15805697471016175799ULL;
int zero = 0;
short var_13 = (short)23184;
unsigned short var_14 = (unsigned short)1914;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
