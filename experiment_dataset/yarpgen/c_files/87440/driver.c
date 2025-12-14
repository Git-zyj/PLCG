#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12273;
signed char var_6 = (signed char)39;
signed char var_9 = (signed char)-26;
unsigned short var_10 = (unsigned short)27077;
unsigned int var_12 = 203714732U;
unsigned char var_13 = (unsigned char)77;
unsigned char var_16 = (unsigned char)58;
signed char var_18 = (signed char)99;
int zero = 0;
unsigned int var_19 = 3773002711U;
unsigned short var_20 = (unsigned short)47069;
unsigned char var_21 = (unsigned char)106;
unsigned int var_22 = 3489509990U;
void init() {
}

void checksum() {
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
