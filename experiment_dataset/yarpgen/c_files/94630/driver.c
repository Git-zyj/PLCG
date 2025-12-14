#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)30099;
unsigned char var_4 = (unsigned char)253;
short var_8 = (short)-20628;
unsigned short var_12 = (unsigned short)30463;
_Bool var_13 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)34678;
int zero = 0;
unsigned short var_19 = (unsigned short)46244;
signed char var_20 = (signed char)110;
int var_21 = -366131309;
signed char var_22 = (signed char)126;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
