#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-9197;
unsigned short var_6 = (unsigned short)7153;
signed char var_8 = (signed char)-88;
unsigned short var_9 = (unsigned short)3857;
short var_10 = (short)-8366;
int zero = 0;
int var_11 = 2101284137;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
