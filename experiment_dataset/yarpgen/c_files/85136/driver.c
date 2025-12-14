#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-147;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)122;
unsigned short var_12 = (unsigned short)49081;
int zero = 0;
int var_13 = 28132911;
unsigned char var_14 = (unsigned char)51;
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
