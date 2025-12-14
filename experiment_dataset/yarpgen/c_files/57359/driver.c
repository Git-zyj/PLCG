#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24670;
short var_2 = (short)-13094;
int var_3 = 1987330822;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-17446;
signed char var_9 = (signed char)-27;
unsigned short var_12 = (unsigned short)40418;
int zero = 0;
int var_14 = 1094787328;
short var_15 = (short)-11565;
int var_16 = 1715316486;
void init() {
}

void checksum() {
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
