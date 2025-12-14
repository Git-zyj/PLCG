#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 576989923U;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 7084540661166934406ULL;
unsigned long long int var_3 = 1889978073197786950ULL;
unsigned short var_4 = (unsigned short)55466;
unsigned short var_5 = (unsigned short)31883;
long long int var_7 = -8819295329978537366LL;
unsigned short var_9 = (unsigned short)56735;
int var_10 = -972805148;
unsigned int var_14 = 280969681U;
unsigned char var_15 = (unsigned char)115;
int zero = 0;
short var_17 = (short)24602;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
