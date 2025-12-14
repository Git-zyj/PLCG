#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3673379073U;
short var_6 = (short)21464;
unsigned short var_9 = (unsigned short)25829;
unsigned char var_10 = (unsigned char)41;
signed char var_11 = (signed char)49;
int zero = 0;
unsigned char var_12 = (unsigned char)8;
unsigned short var_13 = (unsigned short)14018;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
