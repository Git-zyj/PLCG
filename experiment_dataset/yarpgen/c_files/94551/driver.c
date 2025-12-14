#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16857;
long long int var_4 = 5145429340337415024LL;
unsigned int var_7 = 2254740759U;
int var_9 = -309431775;
short var_10 = (short)-29922;
int zero = 0;
int var_14 = 2104727494;
unsigned char var_15 = (unsigned char)8;
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
