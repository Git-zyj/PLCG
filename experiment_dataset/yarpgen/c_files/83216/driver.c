#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)126;
int var_5 = -655443846;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)232;
unsigned short var_9 = (unsigned short)46874;
int var_13 = -1794806600;
int zero = 0;
unsigned int var_17 = 3482978987U;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)215;
int var_20 = 2140368633;
signed char var_21 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
