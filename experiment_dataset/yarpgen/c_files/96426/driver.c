#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
int var_2 = -572464648;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)43332;
unsigned char var_12 = (unsigned char)252;
unsigned char var_13 = (unsigned char)33;
unsigned short var_17 = (unsigned short)8585;
int zero = 0;
unsigned char var_18 = (unsigned char)31;
int var_19 = -161790379;
unsigned short var_20 = (unsigned short)40402;
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
