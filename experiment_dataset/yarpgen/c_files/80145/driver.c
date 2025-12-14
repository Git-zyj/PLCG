#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 324522959;
unsigned short var_4 = (unsigned short)35393;
int var_5 = -189466162;
unsigned char var_6 = (unsigned char)152;
int zero = 0;
signed char var_10 = (signed char)-47;
unsigned char var_11 = (unsigned char)81;
unsigned short var_12 = (unsigned short)50324;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
