#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
_Bool var_4 = (_Bool)1;
int var_8 = 69870642;
long long int var_11 = -1682938596142411183LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 6958409493388769708LL;
int var_14 = 832514383;
short var_15 = (short)19471;
int zero = 0;
unsigned int var_17 = 883562017U;
unsigned char var_18 = (unsigned char)134;
long long int var_19 = 6421741687978765829LL;
unsigned char var_20 = (unsigned char)204;
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
