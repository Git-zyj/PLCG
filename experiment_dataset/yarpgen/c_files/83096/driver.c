#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -4448563;
unsigned short var_9 = (unsigned short)51249;
unsigned int var_10 = 2098345627U;
int zero = 0;
unsigned char var_20 = (unsigned char)140;
signed char var_21 = (signed char)65;
short var_22 = (short)2356;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
