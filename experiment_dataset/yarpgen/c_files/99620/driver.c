#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
signed char var_1 = (signed char)-115;
signed char var_5 = (signed char)-15;
unsigned short var_8 = (unsigned short)30283;
signed char var_9 = (signed char)72;
int zero = 0;
unsigned short var_15 = (unsigned short)49982;
unsigned short var_16 = (unsigned short)62073;
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
