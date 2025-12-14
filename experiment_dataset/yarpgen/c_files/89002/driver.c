#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1842835222;
unsigned char var_6 = (unsigned char)68;
short var_8 = (short)11432;
unsigned short var_10 = (unsigned short)15954;
int zero = 0;
int var_14 = -419577397;
unsigned int var_15 = 1654092388U;
unsigned char var_16 = (unsigned char)111;
unsigned long long int var_17 = 14199074428956334171ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
