#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)7784;
unsigned short var_6 = (unsigned short)5926;
signed char var_11 = (signed char)42;
int var_12 = 465748481;
int zero = 0;
long long int var_15 = -8327535484159765961LL;
long long int var_16 = -5023651461391414377LL;
signed char var_17 = (signed char)75;
unsigned char var_18 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
