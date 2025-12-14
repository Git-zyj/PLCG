#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)197;
unsigned int var_2 = 431379828U;
unsigned char var_3 = (unsigned char)210;
signed char var_4 = (signed char)63;
signed char var_5 = (signed char)37;
unsigned short var_6 = (unsigned short)4483;
unsigned int var_7 = 3712507421U;
int var_9 = -233004271;
unsigned int var_10 = 3457944720U;
int zero = 0;
unsigned int var_11 = 3944110959U;
int var_12 = 1870942248;
int var_13 = 387606133;
int var_14 = 1672666421;
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
