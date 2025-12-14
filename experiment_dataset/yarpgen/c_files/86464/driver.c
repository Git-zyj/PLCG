#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26944;
signed char var_2 = (signed char)118;
long long int var_4 = -2940682808753804230LL;
unsigned short var_5 = (unsigned short)18553;
unsigned short var_12 = (unsigned short)3796;
int zero = 0;
int var_16 = 1604123545;
unsigned char var_17 = (unsigned char)17;
long long int var_18 = 6258889484486048355LL;
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
