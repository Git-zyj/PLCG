#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -74963081;
unsigned short var_6 = (unsigned short)62619;
short var_10 = (short)10110;
signed char var_11 = (signed char)-121;
int zero = 0;
signed char var_13 = (signed char)(-127 - 1);
unsigned short var_14 = (unsigned short)58355;
short var_15 = (short)-3274;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
