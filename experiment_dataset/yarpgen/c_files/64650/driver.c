#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2164648828U;
short var_10 = (short)10945;
unsigned short var_12 = (unsigned short)60684;
int zero = 0;
unsigned long long int var_17 = 6417111256402238600ULL;
unsigned int var_18 = 961939091U;
unsigned int var_19 = 1333964753U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
