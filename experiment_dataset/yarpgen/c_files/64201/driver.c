#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 796805302U;
int var_1 = -11108705;
unsigned short var_3 = (unsigned short)27751;
short var_6 = (short)30505;
unsigned short var_7 = (unsigned short)21926;
int var_8 = -183518411;
unsigned char var_9 = (unsigned char)166;
int zero = 0;
int var_11 = 643499083;
unsigned int var_12 = 559296352U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
