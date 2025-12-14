#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_12 = (unsigned char)10;
unsigned long long int var_13 = 17470049620358998102ULL;
signed char var_17 = (signed char)-119;
int zero = 0;
int var_18 = -274637572;
short var_19 = (short)-14357;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
