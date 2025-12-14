#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8264;
int var_1 = -352201984;
int var_2 = -1687152866;
unsigned long long int var_4 = 13804650483804402074ULL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-25324;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)35;
int zero = 0;
unsigned long long int var_10 = 13885104113439408052ULL;
unsigned int var_11 = 2227953628U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
