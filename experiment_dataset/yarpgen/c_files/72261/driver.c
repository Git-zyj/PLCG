#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)67;
unsigned int var_8 = 4038941997U;
signed char var_15 = (signed char)-123;
int var_16 = -1721267792;
int zero = 0;
short var_18 = (short)-31919;
int var_19 = 321878060;
unsigned short var_20 = (unsigned short)39472;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
