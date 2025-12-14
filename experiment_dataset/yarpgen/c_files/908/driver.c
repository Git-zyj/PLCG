#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 128607484402418128ULL;
unsigned short var_5 = (unsigned short)22344;
int var_7 = -682246421;
unsigned short var_12 = (unsigned short)10925;
int zero = 0;
long long int var_19 = -6654534713730186369LL;
unsigned char var_20 = (unsigned char)107;
unsigned long long int var_21 = 5310633513557107498ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
