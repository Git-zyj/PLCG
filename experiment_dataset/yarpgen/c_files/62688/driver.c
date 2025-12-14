#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -884071975;
long long int var_1 = 8131064395035931400LL;
short var_2 = (short)-27373;
long long int var_8 = 8198334646732055045LL;
int zero = 0;
short var_10 = (short)19362;
long long int var_11 = -1409471227900931469LL;
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
