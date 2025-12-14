#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -561611558;
int var_2 = 287302311;
_Bool var_3 = (_Bool)1;
long long int var_4 = 4754437988544945175LL;
unsigned long long int var_8 = 10169616089472778576ULL;
unsigned short var_10 = (unsigned short)12627;
_Bool var_11 = (_Bool)0;
long long int var_12 = -4185420377057620374LL;
int zero = 0;
unsigned char var_15 = (unsigned char)176;
short var_16 = (short)31039;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)10979;
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
