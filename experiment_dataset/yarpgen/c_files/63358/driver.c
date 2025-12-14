#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1747104476;
unsigned char var_3 = (unsigned char)83;
unsigned char var_5 = (unsigned char)179;
unsigned char var_8 = (unsigned char)218;
int var_9 = -1543838785;
int zero = 0;
long long int var_13 = -1303259592985984218LL;
unsigned char var_14 = (unsigned char)72;
unsigned char var_15 = (unsigned char)187;
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
