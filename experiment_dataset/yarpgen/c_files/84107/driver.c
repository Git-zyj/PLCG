#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2078626199750760880LL;
unsigned char var_1 = (unsigned char)45;
unsigned long long int var_4 = 16072687973490519745ULL;
int var_8 = -1278930186;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)50938;
unsigned short var_14 = (unsigned short)12424;
unsigned char var_15 = (unsigned char)55;
int zero = 0;
unsigned int var_16 = 1968526908U;
unsigned long long int var_17 = 12108268643652147161ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
