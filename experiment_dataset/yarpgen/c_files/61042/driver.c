#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3016730269U;
unsigned char var_3 = (unsigned char)197;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)204;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)50;
_Bool var_12 = (_Bool)1;
int var_15 = -391003929;
int zero = 0;
int var_16 = -2107068978;
short var_17 = (short)-16871;
unsigned char var_18 = (unsigned char)58;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
