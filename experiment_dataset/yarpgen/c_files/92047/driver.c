#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)44932;
unsigned int var_6 = 1648086819U;
unsigned short var_8 = (unsigned short)47438;
short var_9 = (short)-18740;
unsigned char var_10 = (unsigned char)74;
signed char var_12 = (signed char)-125;
int zero = 0;
unsigned char var_13 = (unsigned char)181;
unsigned char var_14 = (unsigned char)215;
unsigned int var_15 = 2910514216U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
