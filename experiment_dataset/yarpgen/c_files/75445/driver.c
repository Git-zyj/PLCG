#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)69;
unsigned int var_5 = 1410825049U;
unsigned long long int var_6 = 7325256380134725522ULL;
unsigned long long int var_7 = 830056665950024287ULL;
unsigned char var_8 = (unsigned char)252;
unsigned short var_9 = (unsigned short)54230;
int zero = 0;
unsigned short var_11 = (unsigned short)11697;
unsigned char var_12 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
