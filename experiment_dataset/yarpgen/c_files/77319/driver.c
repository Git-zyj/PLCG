#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8227903834170753526ULL;
int var_4 = -1140582050;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)49976;
signed char var_9 = (signed char)-61;
int var_12 = 1632726866;
int zero = 0;
unsigned short var_14 = (unsigned short)19211;
unsigned short var_15 = (unsigned short)56429;
signed char var_16 = (signed char)-40;
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
