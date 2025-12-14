#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3756866779U;
unsigned char var_4 = (unsigned char)45;
unsigned long long int var_5 = 854893208387615841ULL;
unsigned short var_6 = (unsigned short)22922;
unsigned short var_7 = (unsigned short)61173;
short var_9 = (short)1796;
signed char var_12 = (signed char)65;
int zero = 0;
unsigned short var_13 = (unsigned short)37958;
unsigned int var_14 = 3426255800U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
