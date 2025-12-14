#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25874;
int var_7 = -1867603343;
unsigned int var_8 = 2263952619U;
unsigned short var_9 = (unsigned short)14195;
short var_18 = (short)3300;
short var_19 = (short)-15918;
int zero = 0;
unsigned short var_20 = (unsigned short)56629;
unsigned char var_21 = (unsigned char)36;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
