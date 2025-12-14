#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)21050;
signed char var_6 = (signed char)5;
unsigned short var_7 = (unsigned short)58208;
unsigned char var_10 = (unsigned char)241;
unsigned int var_11 = 2670657768U;
int zero = 0;
int var_12 = -2100803899;
unsigned short var_13 = (unsigned short)57040;
short var_14 = (short)-21154;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
