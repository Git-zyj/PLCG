#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)264;
int var_3 = 1364083025;
unsigned char var_5 = (unsigned char)140;
int var_8 = 836185667;
short var_9 = (short)-24659;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)112;
unsigned char var_13 = (unsigned char)31;
signed char var_14 = (signed char)41;
unsigned char var_16 = (unsigned char)102;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_19 = 335820438;
unsigned long long int var_20 = 14563062819032539480ULL;
long long int var_21 = 3469667045022172265LL;
void init() {
}

void checksum() {
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
