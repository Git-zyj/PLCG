#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-8271;
signed char var_7 = (signed char)-6;
unsigned short var_10 = (unsigned short)44906;
long long int var_12 = -3949148377260827794LL;
unsigned int var_13 = 4151467487U;
unsigned char var_18 = (unsigned char)120;
int zero = 0;
unsigned int var_19 = 3661376505U;
short var_20 = (short)16933;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
