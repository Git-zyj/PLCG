#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
unsigned short var_4 = (unsigned short)49841;
unsigned int var_8 = 3280932765U;
unsigned char var_12 = (unsigned char)88;
int zero = 0;
unsigned char var_14 = (unsigned char)23;
unsigned char var_15 = (unsigned char)157;
unsigned int var_16 = 1919023731U;
void init() {
}

void checksum() {
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
