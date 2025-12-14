#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3830341293U;
unsigned short var_4 = (unsigned short)37861;
long long int var_11 = -6303416479690200335LL;
int zero = 0;
unsigned char var_16 = (unsigned char)232;
signed char var_17 = (signed char)-65;
signed char var_18 = (signed char)-111;
unsigned short var_19 = (unsigned short)19914;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
