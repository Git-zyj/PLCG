#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2770987984U;
int var_4 = -984788614;
unsigned short var_7 = (unsigned short)30323;
unsigned short var_8 = (unsigned short)41831;
int zero = 0;
signed char var_10 = (signed char)-119;
unsigned char var_11 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
