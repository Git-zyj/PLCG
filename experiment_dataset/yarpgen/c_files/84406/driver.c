#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4130150936U;
int var_2 = -1869065070;
unsigned char var_6 = (unsigned char)67;
int var_10 = 1677916104;
int zero = 0;
unsigned char var_13 = (unsigned char)183;
unsigned char var_14 = (unsigned char)36;
short var_15 = (short)29032;
unsigned char var_16 = (unsigned char)19;
void init() {
}

void checksum() {
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
