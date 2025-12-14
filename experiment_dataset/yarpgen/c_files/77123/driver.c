#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
_Bool var_1 = (_Bool)1;
int var_4 = -1926918506;
unsigned long long int var_5 = 6252522053481731654ULL;
unsigned short var_6 = (unsigned short)25229;
unsigned long long int var_7 = 5678919661485102972ULL;
short var_8 = (short)13451;
signed char var_9 = (signed char)-92;
int var_10 = 723001982;
long long int var_14 = -2145942688835375457LL;
unsigned char var_15 = (unsigned char)19;
unsigned int var_16 = 2123590784U;
unsigned short var_17 = (unsigned short)42319;
unsigned int var_18 = 4041303749U;
long long int var_19 = 7525566549964875685LL;
int zero = 0;
int var_20 = -248204993;
unsigned char var_21 = (unsigned char)151;
void init() {
}

void checksum() {
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
