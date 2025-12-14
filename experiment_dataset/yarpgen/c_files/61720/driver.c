#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
signed char var_1 = (signed char)-65;
_Bool var_5 = (_Bool)0;
signed char var_9 = (signed char)-75;
unsigned long long int var_10 = 4833236385255510973ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)191;
short var_16 = (short)-1091;
unsigned short var_17 = (unsigned short)45858;
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
