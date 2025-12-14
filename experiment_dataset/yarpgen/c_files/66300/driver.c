#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 354955739U;
short var_5 = (short)-15079;
unsigned char var_9 = (unsigned char)252;
int var_10 = 2030569737;
int zero = 0;
unsigned char var_14 = (unsigned char)60;
unsigned long long int var_15 = 2817681067703697570ULL;
signed char var_16 = (signed char)(-127 - 1);
unsigned char var_17 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
