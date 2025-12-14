#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31887;
short var_2 = (short)-19072;
unsigned short var_11 = (unsigned short)47219;
unsigned int var_13 = 1889897949U;
int zero = 0;
unsigned short var_16 = (unsigned short)879;
unsigned short var_17 = (unsigned short)49423;
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
