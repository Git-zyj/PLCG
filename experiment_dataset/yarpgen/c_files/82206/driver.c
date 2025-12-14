#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-26;
unsigned int var_4 = 113636519U;
_Bool var_8 = (_Bool)0;
int var_11 = -1594222957;
unsigned char var_12 = (unsigned char)253;
unsigned short var_16 = (unsigned short)10445;
unsigned char var_17 = (unsigned char)127;
int zero = 0;
int var_18 = -640369500;
int var_19 = 345158181;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
