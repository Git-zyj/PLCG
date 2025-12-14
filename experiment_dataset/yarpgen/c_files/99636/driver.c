#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)222;
unsigned int var_6 = 3358145955U;
unsigned int var_8 = 2050771181U;
int zero = 0;
unsigned long long int var_10 = 9883499497667152258ULL;
unsigned short var_11 = (unsigned short)1940;
unsigned char var_12 = (unsigned char)176;
unsigned long long int var_13 = 4803396041610283933ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
