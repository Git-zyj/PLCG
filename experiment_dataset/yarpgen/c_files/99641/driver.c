#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11994;
unsigned char var_1 = (unsigned char)238;
unsigned short var_2 = (unsigned short)33084;
int var_3 = -129979442;
unsigned char var_8 = (unsigned char)168;
unsigned int var_15 = 2673989342U;
int zero = 0;
unsigned short var_17 = (unsigned short)49447;
unsigned short var_18 = (unsigned short)28320;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
