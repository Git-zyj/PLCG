#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)64981;
unsigned long long int var_15 = 12469365944878145140ULL;
short var_17 = (short)30461;
unsigned long long int var_18 = 14182847757466990603ULL;
int zero = 0;
short var_19 = (short)-32143;
signed char var_20 = (signed char)6;
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
