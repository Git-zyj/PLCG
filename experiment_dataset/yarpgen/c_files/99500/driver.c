#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46186;
long long int var_1 = 2710060373812346907LL;
long long int var_2 = 4883001300333020496LL;
unsigned int var_4 = 3188580334U;
int var_7 = -1084888474;
unsigned short var_8 = (unsigned short)63377;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 4201949649U;
unsigned short var_12 = (unsigned short)62121;
unsigned char var_14 = (unsigned char)34;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)24482;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
