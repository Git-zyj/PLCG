#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1323739923;
unsigned char var_2 = (unsigned char)86;
unsigned short var_5 = (unsigned short)57353;
signed char var_9 = (signed char)-48;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = 2142053421;
unsigned int var_14 = 2894314184U;
unsigned short var_15 = (unsigned short)61461;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
