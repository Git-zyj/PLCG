#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3043488666U;
signed char var_7 = (signed char)-29;
short var_15 = (short)-16055;
int zero = 0;
unsigned char var_19 = (unsigned char)163;
unsigned short var_20 = (unsigned short)27442;
unsigned char var_21 = (unsigned char)242;
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
