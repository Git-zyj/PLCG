#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2371578638U;
unsigned char var_6 = (unsigned char)212;
unsigned int var_10 = 4100027609U;
int zero = 0;
unsigned short var_16 = (unsigned short)30807;
unsigned int var_17 = 2098412659U;
unsigned char var_18 = (unsigned char)14;
unsigned long long int var_19 = 17294670389165775736ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
