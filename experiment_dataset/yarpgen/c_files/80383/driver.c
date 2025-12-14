#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
long long int var_4 = -5356405781300632527LL;
unsigned char var_6 = (unsigned char)161;
signed char var_7 = (signed char)-94;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_14 = (short)5192;
unsigned int var_15 = 2393785826U;
unsigned short var_16 = (unsigned short)8448;
signed char var_17 = (signed char)-21;
long long int var_18 = 7982027355070798159LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
