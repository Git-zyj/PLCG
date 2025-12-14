#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23818;
unsigned short var_5 = (unsigned short)50589;
unsigned char var_6 = (unsigned char)176;
long long int var_9 = -6510406987114907487LL;
unsigned char var_14 = (unsigned char)5;
signed char var_15 = (signed char)-12;
long long int var_16 = 976849889523325503LL;
signed char var_17 = (signed char)105;
int zero = 0;
unsigned int var_18 = 563877145U;
unsigned int var_19 = 2581274830U;
long long int var_20 = 6147651815494540867LL;
short var_21 = (short)8203;
int var_22 = 1354786831;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
