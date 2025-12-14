#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1739017142U;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 358845162U;
signed char var_4 = (signed char)-92;
unsigned char var_5 = (unsigned char)166;
unsigned short var_6 = (unsigned short)5666;
unsigned long long int var_8 = 9030572216097341659ULL;
unsigned char var_9 = (unsigned char)27;
long long int var_11 = 3037358296550044378LL;
unsigned int var_12 = 1925350612U;
signed char var_16 = (signed char)72;
int zero = 0;
short var_17 = (short)-16498;
int var_18 = 145050542;
short var_19 = (short)4536;
unsigned int var_20 = 2821096809U;
void init() {
}

void checksum() {
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
