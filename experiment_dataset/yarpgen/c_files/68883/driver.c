#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-100;
unsigned char var_6 = (unsigned char)105;
unsigned int var_7 = 3935875031U;
unsigned short var_8 = (unsigned short)4430;
short var_9 = (short)11210;
int var_12 = -1372057166;
int zero = 0;
long long int var_13 = -4222940829485149273LL;
unsigned short var_14 = (unsigned short)720;
signed char var_15 = (signed char)87;
signed char var_16 = (signed char)-73;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
