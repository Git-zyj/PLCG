#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)63473;
unsigned short var_8 = (unsigned short)49110;
unsigned short var_9 = (unsigned short)24050;
unsigned int var_14 = 1752820158U;
short var_16 = (short)-21829;
int zero = 0;
unsigned char var_18 = (unsigned char)30;
signed char var_19 = (signed char)118;
signed char var_20 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
