#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1100;
short var_2 = (short)-10232;
unsigned char var_5 = (unsigned char)94;
unsigned short var_6 = (unsigned short)50663;
short var_8 = (short)-16108;
short var_10 = (short)-15915;
int zero = 0;
unsigned short var_14 = (unsigned short)25975;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
