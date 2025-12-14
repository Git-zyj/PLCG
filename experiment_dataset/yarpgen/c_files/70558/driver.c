#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1853954302;
unsigned short var_5 = (unsigned short)13519;
signed char var_6 = (signed char)-81;
int zero = 0;
unsigned char var_14 = (unsigned char)28;
unsigned long long int var_15 = 6629700058519302821ULL;
void init() {
}

void checksum() {
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
