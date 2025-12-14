#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
unsigned short var_5 = (unsigned short)22735;
int var_6 = -1468724794;
unsigned int var_7 = 3157338495U;
long long int var_8 = -6972235676891917434LL;
unsigned short var_12 = (unsigned short)63549;
short var_14 = (short)29970;
int zero = 0;
unsigned char var_15 = (unsigned char)126;
unsigned int var_16 = 940520604U;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-20235;
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
