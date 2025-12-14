#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)6;
unsigned long long int var_8 = 5922789064943368997ULL;
unsigned int var_11 = 426447183U;
unsigned int var_12 = 3048878989U;
int zero = 0;
int var_16 = 1923322982;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)2683;
signed char var_19 = (signed char)-83;
_Bool var_20 = (_Bool)1;
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
