#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)203;
unsigned char var_12 = (unsigned char)65;
long long int var_15 = -2499693205889469331LL;
int zero = 0;
signed char var_20 = (signed char)38;
signed char var_21 = (signed char)-2;
unsigned short var_22 = (unsigned short)13627;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
