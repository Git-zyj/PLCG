#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)8;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)252;
unsigned short var_11 = (unsigned short)32597;
unsigned long long int var_13 = 12026349405127830987ULL;
long long int var_14 = 2722094742249761657LL;
short var_18 = (short)-15487;
int zero = 0;
unsigned char var_20 = (unsigned char)45;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 12304531352507529167ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
