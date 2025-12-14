#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19812;
_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)50;
short var_7 = (short)-7159;
short var_8 = (short)28359;
long long int var_9 = 8486990280695436557LL;
unsigned char var_10 = (unsigned char)65;
long long int var_11 = -9002506269946165759LL;
int var_13 = 1503236003;
unsigned short var_15 = (unsigned short)7948;
unsigned char var_18 = (unsigned char)99;
int zero = 0;
unsigned int var_19 = 748077925U;
unsigned int var_20 = 2729899225U;
unsigned long long int var_21 = 12597794432971980208ULL;
long long int var_22 = -7342967726045364887LL;
unsigned long long int var_23 = 9800130636083227175ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
