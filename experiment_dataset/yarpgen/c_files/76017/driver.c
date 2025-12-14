#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2554805828U;
unsigned char var_1 = (unsigned char)148;
int var_7 = -315645593;
long long int var_10 = -4026302866893633565LL;
unsigned char var_12 = (unsigned char)6;
int var_14 = -513852635;
unsigned char var_15 = (unsigned char)124;
int zero = 0;
int var_16 = 102898655;
short var_17 = (short)-20177;
short var_18 = (short)8081;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
