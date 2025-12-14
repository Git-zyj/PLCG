#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21401;
unsigned short var_7 = (unsigned short)20944;
short var_11 = (short)4466;
int zero = 0;
signed char var_16 = (signed char)90;
unsigned char var_17 = (unsigned char)211;
signed char var_18 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
