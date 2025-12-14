#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2539203479U;
unsigned int var_5 = 1078415212U;
unsigned int var_8 = 2520564551U;
long long int var_11 = 4484318328085549001LL;
unsigned int var_12 = 1007903545U;
unsigned char var_13 = (unsigned char)6;
int zero = 0;
long long int var_19 = -8067506863701334013LL;
unsigned char var_20 = (unsigned char)135;
short var_21 = (short)9874;
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
