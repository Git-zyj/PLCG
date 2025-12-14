#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)111;
short var_3 = (short)16983;
unsigned int var_8 = 1988867165U;
long long int var_16 = -5859882169782179882LL;
int zero = 0;
int var_19 = -2065946318;
unsigned int var_20 = 784193182U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
