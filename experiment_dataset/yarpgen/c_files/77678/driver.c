#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54159;
int var_1 = -409685923;
short var_2 = (short)31020;
unsigned short var_3 = (unsigned short)63301;
_Bool var_4 = (_Bool)0;
long long int var_6 = 6923274349135035873LL;
short var_7 = (short)13960;
unsigned char var_8 = (unsigned char)235;
long long int var_9 = 3124023508206374313LL;
signed char var_11 = (signed char)35;
_Bool var_12 = (_Bool)0;
short var_13 = (short)17281;
unsigned short var_14 = (unsigned short)48806;
long long int var_15 = -6305570616638544768LL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)218;
int zero = 0;
unsigned long long int var_18 = 18136874342502534162ULL;
unsigned short var_19 = (unsigned short)13760;
short var_20 = (short)-8972;
short var_21 = (short)1124;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
