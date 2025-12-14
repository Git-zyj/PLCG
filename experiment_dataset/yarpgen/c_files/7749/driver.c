#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 276351912;
unsigned short var_1 = (unsigned short)41371;
unsigned char var_2 = (unsigned char)234;
int var_3 = -861045894;
_Bool var_4 = (_Bool)1;
short var_7 = (short)1776;
int var_9 = 854280068;
unsigned short var_11 = (unsigned short)64633;
long long int var_12 = 5627766492255920859LL;
short var_13 = (short)2927;
signed char var_14 = (signed char)-43;
int zero = 0;
unsigned char var_15 = (unsigned char)137;
unsigned int var_16 = 3340260030U;
unsigned char var_17 = (unsigned char)233;
unsigned int var_18 = 694564552U;
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
