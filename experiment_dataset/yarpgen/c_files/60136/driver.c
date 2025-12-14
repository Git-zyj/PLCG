#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)16456;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 3948355195287445792ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)197;
unsigned short var_21 = (unsigned short)41498;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
