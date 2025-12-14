#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)30;
signed char var_2 = (signed char)48;
unsigned long long int var_6 = 10642652778793889638ULL;
signed char var_14 = (signed char)-52;
int zero = 0;
unsigned int var_16 = 1344057917U;
short var_17 = (short)13662;
unsigned char var_18 = (unsigned char)133;
void init() {
}

void checksum() {
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
