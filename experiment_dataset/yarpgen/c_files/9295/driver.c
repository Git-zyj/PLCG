#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
signed char var_4 = (signed char)-7;
unsigned int var_8 = 1299058146U;
long long int var_15 = -1651058419354500733LL;
int zero = 0;
unsigned short var_16 = (unsigned short)24453;
unsigned short var_17 = (unsigned short)41733;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
