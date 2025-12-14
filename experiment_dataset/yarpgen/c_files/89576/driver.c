#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)223;
signed char var_3 = (signed char)40;
unsigned short var_5 = (unsigned short)21714;
unsigned int var_6 = 1698841405U;
unsigned int var_10 = 4106411776U;
unsigned long long int var_15 = 17132993225914733968ULL;
int zero = 0;
unsigned int var_18 = 2485254262U;
long long int var_19 = 3962798207655772221LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
