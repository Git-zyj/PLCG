#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)1061;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 8859165973210201463ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 652145968536823634ULL;
int var_9 = -1746787356;
unsigned int var_11 = 4198561864U;
unsigned short var_12 = (unsigned short)13550;
long long int var_13 = 7714125535922845200LL;
int zero = 0;
unsigned char var_17 = (unsigned char)206;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)165;
short var_20 = (short)25547;
long long int var_21 = 8747702064208503762LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
