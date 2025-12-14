#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12461574045841848964ULL;
unsigned int var_4 = 985048306U;
unsigned short var_5 = (unsigned short)13236;
unsigned char var_6 = (unsigned char)251;
unsigned short var_8 = (unsigned short)34405;
_Bool var_9 = (_Bool)0;
int var_10 = -205981643;
long long int var_11 = -9156122096492955213LL;
unsigned long long int var_14 = 9319143795732915005ULL;
int zero = 0;
short var_15 = (short)-5947;
unsigned int var_16 = 3849873018U;
unsigned int var_17 = 383757383U;
signed char var_18 = (signed char)-34;
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
