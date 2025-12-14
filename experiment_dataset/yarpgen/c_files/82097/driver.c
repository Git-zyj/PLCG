#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12532;
short var_2 = (short)24482;
short var_4 = (short)13746;
long long int var_9 = -7726336787608632387LL;
int zero = 0;
int var_10 = -716618819;
short var_11 = (short)-29201;
unsigned int var_12 = 1851066447U;
unsigned char var_13 = (unsigned char)23;
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
