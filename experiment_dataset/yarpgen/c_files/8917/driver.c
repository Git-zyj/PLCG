#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)1;
unsigned short var_6 = (unsigned short)8529;
int var_8 = 1099915305;
long long int var_10 = -5055932240795902612LL;
short var_18 = (short)12884;
int zero = 0;
short var_19 = (short)-464;
unsigned int var_20 = 1648460585U;
unsigned char var_21 = (unsigned char)103;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
