#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37193;
unsigned char var_5 = (unsigned char)214;
unsigned char var_6 = (unsigned char)169;
unsigned short var_8 = (unsigned short)60053;
signed char var_14 = (signed char)20;
int zero = 0;
unsigned short var_16 = (unsigned short)19798;
signed char var_17 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
