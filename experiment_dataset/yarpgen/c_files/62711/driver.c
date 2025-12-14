#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
long long int var_7 = -4055891651124943034LL;
unsigned short var_8 = (unsigned short)16446;
unsigned char var_11 = (unsigned char)2;
int zero = 0;
int var_12 = 1496643125;
signed char var_13 = (signed char)109;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1793403114U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
