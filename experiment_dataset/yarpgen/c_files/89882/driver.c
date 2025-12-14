#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11479;
int var_7 = -1245020444;
unsigned short var_10 = (unsigned short)13043;
unsigned short var_14 = (unsigned short)23284;
unsigned int var_16 = 2153449870U;
int zero = 0;
unsigned short var_18 = (unsigned short)56666;
signed char var_19 = (signed char)9;
unsigned long long int var_20 = 7188275796768235879ULL;
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
