#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61129;
long long int var_5 = -1730540051411326039LL;
unsigned char var_6 = (unsigned char)192;
int zero = 0;
short var_11 = (short)3086;
unsigned int var_12 = 3388820050U;
unsigned int var_13 = 509362504U;
void init() {
}

void checksum() {
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
