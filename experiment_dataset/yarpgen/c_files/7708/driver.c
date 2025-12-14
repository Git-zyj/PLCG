#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)41675;
short var_6 = (short)-31301;
long long int var_11 = 4453090154417399777LL;
unsigned long long int var_12 = 9391800374329722337ULL;
int zero = 0;
unsigned long long int var_15 = 6294954651316758031ULL;
int var_16 = 383869284;
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
