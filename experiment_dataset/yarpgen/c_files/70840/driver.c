#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 169958224459665247ULL;
unsigned char var_7 = (unsigned char)166;
signed char var_12 = (signed char)-15;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)240;
int zero = 0;
unsigned int var_15 = 3250402516U;
unsigned long long int var_16 = 12542703622928508460ULL;
signed char var_17 = (signed char)59;
void init() {
}

void checksum() {
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
