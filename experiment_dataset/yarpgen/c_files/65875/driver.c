#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-79;
signed char var_3 = (signed char)-120;
short var_5 = (short)-9957;
short var_11 = (short)2164;
int zero = 0;
short var_13 = (short)-21171;
signed char var_14 = (signed char)39;
unsigned short var_15 = (unsigned short)62611;
unsigned short var_16 = (unsigned short)39990;
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
