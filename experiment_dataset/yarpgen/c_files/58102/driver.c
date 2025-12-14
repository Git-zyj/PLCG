#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10755;
unsigned char var_1 = (unsigned char)203;
signed char var_5 = (signed char)127;
int var_6 = -1961725343;
unsigned char var_8 = (unsigned char)60;
unsigned short var_9 = (unsigned short)26966;
long long int var_11 = 8076467655067334554LL;
signed char var_13 = (signed char)-3;
unsigned short var_14 = (unsigned short)50821;
short var_15 = (short)-23872;
int zero = 0;
signed char var_16 = (signed char)59;
unsigned long long int var_17 = 15072712199861902098ULL;
unsigned int var_18 = 589080020U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
