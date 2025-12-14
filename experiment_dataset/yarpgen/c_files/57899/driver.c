#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 595254881U;
signed char var_2 = (signed char)-69;
unsigned int var_4 = 1920114422U;
unsigned char var_6 = (unsigned char)1;
unsigned char var_10 = (unsigned char)239;
int zero = 0;
unsigned char var_17 = (unsigned char)171;
unsigned long long int var_18 = 5566590383107596732ULL;
unsigned char var_19 = (unsigned char)91;
int var_20 = -1592852398;
unsigned long long int var_21 = 13096493313824024571ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
