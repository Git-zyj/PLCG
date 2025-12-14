#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_3 = (unsigned char)81;
short var_5 = (short)-16867;
short var_6 = (short)4144;
short var_8 = (short)-347;
unsigned short var_10 = (unsigned short)62712;
int zero = 0;
signed char var_12 = (signed char)38;
unsigned long long int var_13 = 18012876129533726232ULL;
unsigned char var_14 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
