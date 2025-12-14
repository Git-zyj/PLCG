#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)72;
signed char var_1 = (signed char)114;
unsigned short var_3 = (unsigned short)18087;
unsigned char var_5 = (unsigned char)149;
signed char var_6 = (signed char)40;
short var_8 = (short)12556;
_Bool var_9 = (_Bool)1;
long long int var_11 = 8013265109492634069LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-16418;
long long int var_15 = 2384989186541688076LL;
signed char var_16 = (signed char)71;
unsigned char var_17 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
