#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9222931943050965083ULL;
unsigned short var_2 = (unsigned short)6026;
signed char var_7 = (signed char)-83;
unsigned int var_8 = 1168935899U;
short var_15 = (short)-8832;
int zero = 0;
signed char var_16 = (signed char)-92;
unsigned char var_17 = (unsigned char)82;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
