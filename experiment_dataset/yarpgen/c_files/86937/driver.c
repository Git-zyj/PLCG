#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12882;
signed char var_5 = (signed char)-2;
long long int var_7 = 4033026377296195521LL;
unsigned char var_10 = (unsigned char)99;
unsigned short var_12 = (unsigned short)46997;
int zero = 0;
unsigned long long int var_14 = 11865564692042265266ULL;
unsigned char var_15 = (unsigned char)177;
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
