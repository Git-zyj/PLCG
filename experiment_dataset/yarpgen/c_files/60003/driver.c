#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16071;
unsigned char var_2 = (unsigned char)189;
unsigned short var_7 = (unsigned short)39489;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = 819616998;
short var_12 = (short)19401;
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
