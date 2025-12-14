#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1091220615U;
int var_1 = 1719463787;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)61;
signed char var_6 = (signed char)96;
int var_17 = -699821997;
unsigned char var_18 = (unsigned char)60;
int zero = 0;
unsigned int var_19 = 2740595574U;
short var_20 = (short)-23489;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
