#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5611194663767663689ULL;
unsigned long long int var_9 = 14109531073548505327ULL;
unsigned long long int var_10 = 5297613394605071957ULL;
unsigned short var_12 = (unsigned short)23950;
int var_13 = 1035907304;
int zero = 0;
unsigned short var_15 = (unsigned short)55655;
unsigned int var_16 = 762760516U;
signed char var_17 = (signed char)-42;
int var_18 = -1715243970;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
