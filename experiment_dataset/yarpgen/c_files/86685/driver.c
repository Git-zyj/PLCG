#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-1564;
unsigned char var_4 = (unsigned char)77;
unsigned short var_7 = (unsigned short)39286;
int var_10 = -1236625290;
int zero = 0;
int var_15 = -569928701;
short var_16 = (short)659;
void init() {
}

void checksum() {
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
