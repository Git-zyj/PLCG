#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -30500053;
signed char var_3 = (signed char)16;
int var_4 = 1250998737;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned short var_11 = (unsigned short)17150;
int var_12 = 819795913;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = -1033406547;
int var_15 = -957250363;
signed char var_16 = (signed char)49;
signed char var_17 = (signed char)45;
unsigned short var_18 = (unsigned short)16201;
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
