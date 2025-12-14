#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1316093362;
signed char var_8 = (signed char)99;
int var_11 = -1663731686;
long long int var_12 = -398001520159784326LL;
unsigned long long int var_13 = 9810287827663612009ULL;
signed char var_16 = (signed char)-64;
int zero = 0;
unsigned long long int var_20 = 10450479255558551887ULL;
unsigned char var_21 = (unsigned char)46;
int var_22 = 424119838;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
