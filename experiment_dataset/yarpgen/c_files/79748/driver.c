#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2048576495U;
unsigned short var_5 = (unsigned short)13581;
unsigned int var_7 = 3789976911U;
unsigned short var_10 = (unsigned short)42294;
int zero = 0;
unsigned short var_12 = (unsigned short)4676;
signed char var_13 = (signed char)-61;
unsigned short var_14 = (unsigned short)13370;
int var_15 = -575122796;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
