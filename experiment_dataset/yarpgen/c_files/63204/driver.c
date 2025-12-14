#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)5581;
unsigned int var_4 = 4146489043U;
unsigned char var_9 = (unsigned char)86;
unsigned char var_12 = (unsigned char)54;
unsigned char var_13 = (unsigned char)102;
unsigned short var_14 = (unsigned short)40718;
int zero = 0;
unsigned short var_16 = (unsigned short)19666;
long long int var_17 = -4458795776315114959LL;
void init() {
}

void checksum() {
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
