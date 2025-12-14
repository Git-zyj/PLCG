#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)167;
unsigned char var_1 = (unsigned char)249;
unsigned short var_3 = (unsigned short)30416;
unsigned int var_7 = 2672228338U;
short var_10 = (short)7792;
int zero = 0;
unsigned int var_12 = 4066914066U;
unsigned char var_13 = (unsigned char)139;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
