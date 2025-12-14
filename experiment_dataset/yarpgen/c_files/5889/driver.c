#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)40;
signed char var_3 = (signed char)12;
short var_5 = (short)-3642;
unsigned char var_6 = (unsigned char)37;
long long int var_12 = 372427914234350006LL;
unsigned char var_19 = (unsigned char)204;
int zero = 0;
short var_20 = (short)10128;
unsigned short var_21 = (unsigned short)2784;
long long int var_22 = 7169051431137300932LL;
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
