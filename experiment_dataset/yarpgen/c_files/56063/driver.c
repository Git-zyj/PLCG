#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
signed char var_1 = (signed char)124;
unsigned char var_7 = (unsigned char)0;
unsigned char var_10 = (unsigned char)131;
int zero = 0;
unsigned short var_11 = (unsigned short)39435;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 998489637U;
void init() {
}

void checksum() {
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
