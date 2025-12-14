#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30284;
short var_6 = (short)8874;
unsigned short var_10 = (unsigned short)21105;
unsigned short var_12 = (unsigned short)50735;
int zero = 0;
signed char var_13 = (signed char)-19;
signed char var_14 = (signed char)-51;
unsigned short var_15 = (unsigned short)60343;
unsigned char var_16 = (unsigned char)192;
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
