#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32693;
unsigned char var_1 = (unsigned char)162;
unsigned short var_2 = (unsigned short)8005;
unsigned int var_5 = 1938517499U;
unsigned short var_7 = (unsigned short)12678;
unsigned short var_8 = (unsigned short)62732;
_Bool var_11 = (_Bool)1;
long long int var_12 = 7264478026732740440LL;
unsigned long long int var_14 = 15802559542381147795ULL;
unsigned long long int var_15 = 7215276131811306490ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_17 = 21797814;
signed char var_18 = (signed char)103;
void init() {
}

void checksum() {
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
