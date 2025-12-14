#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5924;
short var_6 = (short)-7269;
long long int var_7 = -2120105706515324352LL;
unsigned long long int var_8 = 15890090639650373089ULL;
short var_11 = (short)32238;
int zero = 0;
unsigned short var_12 = (unsigned short)41562;
unsigned short var_13 = (unsigned short)23428;
short var_14 = (short)15084;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
