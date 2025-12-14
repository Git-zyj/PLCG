#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18184761741598489096ULL;
unsigned short var_2 = (unsigned short)13056;
unsigned long long int var_6 = 13210454748219670714ULL;
unsigned long long int var_7 = 12009748480608498316ULL;
unsigned short var_10 = (unsigned short)2711;
unsigned short var_13 = (unsigned short)7213;
unsigned short var_14 = (unsigned short)59584;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)57590;
unsigned short var_17 = (unsigned short)13742;
unsigned short var_18 = (unsigned short)35774;
unsigned short var_19 = (unsigned short)30805;
unsigned short var_20 = (unsigned short)4905;
unsigned short var_21 = (unsigned short)31870;
unsigned short var_22 = (unsigned short)17135;
unsigned long long int var_23 = 9821920068403702392ULL;
short var_24 = (short)29779;
short var_25 = (short)15886;
short var_26 = (short)-10696;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
