#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4722099329616284990LL;
int zero = 0;
unsigned short var_16 = (unsigned short)59774;
unsigned long long int var_17 = 12042961289887425619ULL;
unsigned short var_18 = (unsigned short)7043;
unsigned char var_19 = (unsigned char)94;
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
