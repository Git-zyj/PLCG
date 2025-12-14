#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4222547288566398079LL;
long long int var_2 = 8170904588552033201LL;
short var_4 = (short)-11561;
short var_5 = (short)-10806;
short var_6 = (short)23283;
short var_10 = (short)-25742;
signed char var_11 = (signed char)-97;
int var_12 = -2044190144;
signed char var_14 = (signed char)-75;
int zero = 0;
long long int var_15 = -5023955809687692103LL;
unsigned long long int var_16 = 1524214681099917578ULL;
void init() {
}

void checksum() {
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
