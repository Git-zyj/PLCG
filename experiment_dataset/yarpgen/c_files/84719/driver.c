#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)208;
unsigned short var_3 = (unsigned short)6656;
unsigned short var_6 = (unsigned short)42193;
short var_9 = (short)13857;
long long int var_10 = 635412430415429253LL;
int zero = 0;
unsigned short var_11 = (unsigned short)38663;
signed char var_12 = (signed char)59;
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
