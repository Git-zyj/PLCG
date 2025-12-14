#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
unsigned short var_1 = (unsigned short)35888;
long long int var_8 = -9147851938546845411LL;
unsigned short var_13 = (unsigned short)4620;
int zero = 0;
signed char var_14 = (signed char)23;
short var_15 = (short)-9730;
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
