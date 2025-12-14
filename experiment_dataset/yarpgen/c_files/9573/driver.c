#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13221855651084665486ULL;
int var_4 = 883451533;
unsigned long long int var_5 = 2794683604084465003ULL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-48;
signed char var_10 = (signed char)73;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)22532;
int zero = 0;
int var_15 = 1939328504;
unsigned long long int var_16 = 11478757069763445394ULL;
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
