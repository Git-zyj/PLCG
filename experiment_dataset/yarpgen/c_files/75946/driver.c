#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4055630952U;
unsigned int var_2 = 2200245602U;
unsigned long long int var_7 = 4699983687061501947ULL;
unsigned long long int var_8 = 15733827666177226376ULL;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)115;
int zero = 0;
unsigned int var_15 = 3421229965U;
int var_16 = -628995159;
unsigned short var_17 = (unsigned short)19264;
_Bool var_18 = (_Bool)1;
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
