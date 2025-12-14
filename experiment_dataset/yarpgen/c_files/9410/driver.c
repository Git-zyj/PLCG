#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 642532748U;
unsigned char var_2 = (unsigned char)184;
short var_10 = (short)15704;
unsigned short var_12 = (unsigned short)41156;
unsigned char var_13 = (unsigned char)232;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
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
