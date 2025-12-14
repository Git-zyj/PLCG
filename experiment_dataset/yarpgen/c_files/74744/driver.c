#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
unsigned char var_3 = (unsigned char)137;
unsigned char var_4 = (unsigned char)200;
long long int var_5 = 2679267998273386857LL;
unsigned char var_7 = (unsigned char)47;
int zero = 0;
unsigned char var_10 = (unsigned char)248;
long long int var_11 = -6314428124078958373LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
