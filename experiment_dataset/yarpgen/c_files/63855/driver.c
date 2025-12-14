#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14013623970512381620ULL;
unsigned int var_1 = 422389918U;
short var_4 = (short)-6445;
int var_6 = 155178809;
unsigned int var_8 = 1014033027U;
signed char var_9 = (signed char)-26;
_Bool var_10 = (_Bool)0;
short var_12 = (short)25530;
signed char var_13 = (signed char)-81;
unsigned short var_15 = (unsigned short)34712;
unsigned long long int var_19 = 9453782989221716752ULL;
int zero = 0;
long long int var_20 = 6978476467733848422LL;
unsigned short var_21 = (unsigned short)30215;
signed char var_22 = (signed char)-96;
short var_23 = (short)-9394;
short var_24 = (short)-11945;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
