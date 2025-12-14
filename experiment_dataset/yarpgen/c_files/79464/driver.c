#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
unsigned char var_2 = (unsigned char)235;
int var_3 = 1382367181;
unsigned short var_4 = (unsigned short)63862;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-42;
long long int var_11 = 5294681979656700493LL;
unsigned int var_12 = 249836974U;
long long int var_13 = -4398665088843171372LL;
unsigned long long int var_14 = 7796141391380663138ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)1233;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-79;
short var_18 = (short)-9739;
signed char var_19 = (signed char)123;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
