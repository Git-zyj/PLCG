#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13849;
unsigned short var_3 = (unsigned short)16514;
unsigned short var_16 = (unsigned short)59968;
int zero = 0;
unsigned char var_18 = (unsigned char)248;
long long int var_19 = 7485311282263869886LL;
short var_20 = (short)32634;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
