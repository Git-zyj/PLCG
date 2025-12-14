#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 514947129;
int var_7 = -1276021738;
unsigned int var_8 = 1966844873U;
unsigned int var_10 = 3036885795U;
unsigned short var_14 = (unsigned short)60073;
int zero = 0;
unsigned int var_17 = 810113051U;
unsigned short var_18 = (unsigned short)24969;
unsigned int var_19 = 4038656034U;
void init() {
}

void checksum() {
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
