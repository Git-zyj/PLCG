#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9321;
unsigned int var_1 = 3631248881U;
long long int var_2 = -2674530750297548853LL;
long long int var_4 = 531358066664794456LL;
int var_5 = 341085221;
signed char var_8 = (signed char)99;
short var_10 = (short)6811;
long long int var_11 = -3357673577662123994LL;
int zero = 0;
unsigned char var_12 = (unsigned char)238;
unsigned char var_13 = (unsigned char)179;
unsigned int var_14 = 1088613305U;
unsigned long long int var_15 = 3184864294780375024ULL;
unsigned int var_16 = 2202549874U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
