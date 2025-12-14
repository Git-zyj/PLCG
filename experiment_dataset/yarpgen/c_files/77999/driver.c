#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42405;
unsigned short var_13 = (unsigned short)53310;
int zero = 0;
unsigned short var_19 = (unsigned short)36507;
short var_20 = (short)6833;
unsigned short var_21 = (unsigned short)58322;
unsigned char var_22 = (unsigned char)7;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
