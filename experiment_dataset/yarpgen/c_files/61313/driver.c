#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)71;
unsigned int var_3 = 3476300331U;
signed char var_4 = (signed char)-2;
int var_7 = 725565399;
int zero = 0;
unsigned short var_13 = (unsigned short)12984;
long long int var_14 = 6153165422978478195LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
