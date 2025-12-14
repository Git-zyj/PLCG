#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4698246696662344002LL;
unsigned char var_1 = (unsigned char)151;
unsigned long long int var_3 = 12639428532191249057ULL;
unsigned char var_6 = (unsigned char)248;
short var_9 = (short)-5033;
int zero = 0;
signed char var_12 = (signed char)-14;
short var_13 = (short)19951;
unsigned char var_14 = (unsigned char)32;
unsigned short var_15 = (unsigned short)42218;
unsigned char var_16 = (unsigned char)136;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
