#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18176;
signed char var_1 = (signed char)63;
signed char var_6 = (signed char)-73;
unsigned char var_8 = (unsigned char)240;
short var_9 = (short)-13616;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -247658642;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
