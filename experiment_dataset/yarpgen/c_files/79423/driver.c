#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9084877432739432688LL;
unsigned int var_3 = 3364035121U;
unsigned short var_4 = (unsigned short)28131;
int zero = 0;
signed char var_17 = (signed char)-50;
unsigned char var_18 = (unsigned char)93;
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
