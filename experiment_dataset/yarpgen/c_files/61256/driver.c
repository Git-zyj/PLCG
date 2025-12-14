#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
unsigned long long int var_2 = 2486561600324377076ULL;
unsigned short var_7 = (unsigned short)49259;
_Bool var_8 = (_Bool)0;
int var_10 = -872652554;
unsigned short var_11 = (unsigned short)23753;
_Bool var_12 = (_Bool)1;
int var_13 = -680204936;
unsigned short var_15 = (unsigned short)24185;
unsigned short var_16 = (unsigned short)40173;
int zero = 0;
unsigned short var_18 = (unsigned short)1545;
signed char var_19 = (signed char)7;
unsigned int var_20 = 3939462690U;
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
