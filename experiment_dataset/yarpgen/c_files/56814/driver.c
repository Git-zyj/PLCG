#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)23;
unsigned short var_3 = (unsigned short)16969;
unsigned short var_5 = (unsigned short)64838;
unsigned char var_8 = (unsigned char)10;
int zero = 0;
unsigned short var_11 = (unsigned short)6194;
unsigned long long int var_12 = 14108690793089604024ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
