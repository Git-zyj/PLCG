#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)18;
unsigned short var_3 = (unsigned short)38050;
unsigned short var_10 = (unsigned short)65365;
unsigned char var_12 = (unsigned char)15;
int zero = 0;
int var_15 = 1016815802;
int var_16 = -1308300259;
void init() {
}

void checksum() {
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
