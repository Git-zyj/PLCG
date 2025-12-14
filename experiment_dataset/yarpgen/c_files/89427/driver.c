#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3357554644U;
unsigned short var_1 = (unsigned short)32357;
long long int var_4 = -7079360954319871634LL;
unsigned char var_6 = (unsigned char)146;
unsigned long long int var_7 = 11942846681229923478ULL;
signed char var_8 = (signed char)-73;
int var_11 = -287064643;
unsigned short var_12 = (unsigned short)39741;
int zero = 0;
unsigned char var_13 = (unsigned char)254;
unsigned int var_14 = 2713840877U;
unsigned char var_15 = (unsigned char)247;
unsigned char var_16 = (unsigned char)34;
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
