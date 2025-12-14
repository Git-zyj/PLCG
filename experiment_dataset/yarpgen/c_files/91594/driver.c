#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
unsigned long long int var_4 = 14281904122527831732ULL;
unsigned long long int var_5 = 993239730678584129ULL;
unsigned char var_6 = (unsigned char)12;
unsigned long long int var_7 = 9780207125544902882ULL;
int zero = 0;
unsigned long long int var_11 = 730840685321690211ULL;
unsigned long long int var_12 = 15005283650210456889ULL;
unsigned char var_13 = (unsigned char)43;
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
