#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)42286;
short var_9 = (short)29739;
unsigned char var_11 = (unsigned char)149;
long long int var_12 = -3917312654905217303LL;
int zero = 0;
unsigned int var_13 = 2797043792U;
unsigned int var_14 = 3282899120U;
int var_15 = 165585747;
unsigned char var_16 = (unsigned char)12;
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
