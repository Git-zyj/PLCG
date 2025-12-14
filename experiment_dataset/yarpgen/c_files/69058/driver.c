#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12428422171656257797ULL;
unsigned long long int var_2 = 17591904859169262649ULL;
int var_3 = 312278879;
signed char var_5 = (signed char)32;
short var_7 = (short)-31317;
unsigned long long int var_10 = 14970121852659615012ULL;
int zero = 0;
unsigned long long int var_11 = 5348377828715186073ULL;
signed char var_12 = (signed char)66;
signed char var_13 = (signed char)118;
signed char var_14 = (signed char)81;
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
