#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7243692255799517700LL;
short var_3 = (short)-31684;
unsigned long long int var_11 = 5622691333590467184ULL;
int zero = 0;
short var_12 = (short)-22051;
signed char var_13 = (signed char)-1;
unsigned char var_14 = (unsigned char)184;
int var_15 = -699342774;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
