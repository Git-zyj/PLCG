#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9556;
unsigned short var_3 = (unsigned short)49321;
unsigned short var_4 = (unsigned short)61716;
unsigned short var_5 = (unsigned short)4030;
unsigned short var_7 = (unsigned short)14303;
unsigned short var_8 = (unsigned short)18913;
unsigned short var_9 = (unsigned short)50459;
unsigned short var_10 = (unsigned short)43229;
unsigned short var_11 = (unsigned short)6924;
unsigned short var_14 = (unsigned short)32671;
int zero = 0;
unsigned short var_15 = (unsigned short)5115;
unsigned short var_16 = (unsigned short)2798;
unsigned short var_17 = (unsigned short)33718;
unsigned short var_18 = (unsigned short)18591;
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
