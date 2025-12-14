#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4027010424201655359LL;
unsigned short var_8 = (unsigned short)29949;
int zero = 0;
unsigned short var_11 = (unsigned short)24219;
long long int var_12 = -7117381091043268715LL;
unsigned short var_13 = (unsigned short)14641;
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
