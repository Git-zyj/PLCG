#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14472;
short var_4 = (short)18655;
unsigned int var_6 = 4082073271U;
unsigned long long int var_9 = 14595264722266409470ULL;
long long int var_11 = 651675645136773996LL;
unsigned int var_12 = 1349385446U;
unsigned long long int var_16 = 754498640019547359ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 1475660272U;
unsigned char var_20 = (unsigned char)174;
int var_21 = -382961164;
unsigned char var_22 = (unsigned char)0;
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
