#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
_Bool var_1 = (_Bool)1;
int var_2 = 1204065221;
int var_3 = -1811057378;
short var_5 = (short)22007;
unsigned int var_6 = 1582336574U;
unsigned char var_7 = (unsigned char)108;
int var_8 = 1767179856;
int zero = 0;
unsigned long long int var_10 = 13480083378192261739ULL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2436439963U;
unsigned int var_13 = 3316032086U;
unsigned int var_14 = 552119801U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
