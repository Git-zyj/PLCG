#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 1683425544U;
short var_4 = (short)3725;
signed char var_5 = (signed char)-40;
int var_9 = -517600056;
int var_10 = -287129758;
signed char var_11 = (signed char)-75;
unsigned long long int var_13 = 766563612780066182ULL;
int zero = 0;
short var_16 = (short)12590;
unsigned long long int var_17 = 13375921819845433324ULL;
signed char var_18 = (signed char)-23;
unsigned short var_19 = (unsigned short)35061;
short var_20 = (short)-6896;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
