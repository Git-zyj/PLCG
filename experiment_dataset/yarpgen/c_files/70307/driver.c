#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
unsigned int var_2 = 1254890603U;
signed char var_3 = (signed char)113;
unsigned char var_5 = (unsigned char)250;
signed char var_6 = (signed char)7;
unsigned short var_8 = (unsigned short)48446;
unsigned int var_9 = 948333688U;
int var_10 = 1791688425;
unsigned long long int var_12 = 11025051351981158261ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)134;
int var_16 = -519472713;
unsigned char var_17 = (unsigned char)119;
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
