#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)31445;
unsigned long long int var_14 = 654008799121296857ULL;
unsigned int var_15 = 3000996823U;
signed char var_16 = (signed char)33;
int zero = 0;
unsigned char var_17 = (unsigned char)36;
unsigned int var_18 = 3965260379U;
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
