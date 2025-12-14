#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1927796255;
int var_4 = 498384119;
unsigned char var_6 = (unsigned char)223;
unsigned int var_15 = 3797283413U;
unsigned short var_17 = (unsigned short)29979;
int zero = 0;
unsigned char var_18 = (unsigned char)12;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 2702211585479289616ULL;
int var_21 = 134809517;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
