#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -11592581;
long long int var_2 = -8955723649208850741LL;
unsigned int var_10 = 1696451810U;
unsigned long long int var_12 = 10580522815577194788ULL;
unsigned long long int var_18 = 6414733929524580838ULL;
int zero = 0;
unsigned long long int var_20 = 794086610830634358ULL;
long long int var_21 = 8860555379701063191LL;
short var_22 = (short)-16226;
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
