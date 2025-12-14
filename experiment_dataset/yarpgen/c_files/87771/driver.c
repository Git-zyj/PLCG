#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 234053241U;
unsigned long long int var_3 = 5152338937291222809ULL;
signed char var_8 = (signed char)72;
unsigned short var_11 = (unsigned short)14010;
int zero = 0;
signed char var_16 = (signed char)-83;
int var_17 = 701138556;
int var_18 = 1995118037;
unsigned int var_19 = 451589502U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
