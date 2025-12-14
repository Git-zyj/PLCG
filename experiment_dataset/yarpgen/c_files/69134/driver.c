#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2870222282U;
unsigned short var_3 = (unsigned short)38026;
unsigned int var_5 = 3752703472U;
unsigned int var_8 = 1797554313U;
unsigned int var_10 = 3965074789U;
unsigned short var_11 = (unsigned short)13291;
unsigned long long int var_12 = 9113941130548216015ULL;
int zero = 0;
unsigned int var_16 = 3644408751U;
unsigned int var_17 = 3343731437U;
unsigned int var_18 = 3944093589U;
unsigned int var_19 = 4197094556U;
unsigned int var_20 = 2210156979U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
