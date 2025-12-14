#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13856049412401066279ULL;
unsigned int var_1 = 1287157030U;
unsigned long long int var_3 = 6361628488221730188ULL;
unsigned long long int var_5 = 9347194589918764607ULL;
signed char var_8 = (signed char)-84;
int var_9 = 1627248176;
int var_10 = -333429606;
int zero = 0;
short var_11 = (short)31837;
unsigned char var_12 = (unsigned char)216;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2735113343U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
