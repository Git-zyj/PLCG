#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6026874182076314812ULL;
unsigned char var_3 = (unsigned char)231;
unsigned long long int var_5 = 7679327522198779458ULL;
unsigned char var_8 = (unsigned char)135;
unsigned char var_9 = (unsigned char)130;
short var_10 = (short)19763;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 211889973U;
short var_13 = (short)-19696;
unsigned char var_14 = (unsigned char)167;
short var_15 = (short)7987;
int zero = 0;
unsigned int var_18 = 2149589064U;
int var_19 = 1942766401;
unsigned int var_20 = 3306065084U;
void init() {
}

void checksum() {
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
