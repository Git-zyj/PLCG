#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36203;
unsigned char var_2 = (unsigned char)97;
unsigned short var_6 = (unsigned short)46335;
int var_8 = -1006178095;
unsigned short var_13 = (unsigned short)57626;
int zero = 0;
short var_16 = (short)32149;
unsigned short var_17 = (unsigned short)25445;
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
