#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1579857811414275018ULL;
unsigned short var_4 = (unsigned short)60182;
short var_5 = (short)-30877;
int zero = 0;
unsigned char var_12 = (unsigned char)244;
unsigned short var_13 = (unsigned short)10008;
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
