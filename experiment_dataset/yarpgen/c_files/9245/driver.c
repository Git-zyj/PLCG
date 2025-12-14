#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 476786749U;
unsigned long long int var_5 = 10539074736970509224ULL;
int var_7 = -435805794;
int zero = 0;
int var_11 = 1773897313;
unsigned long long int var_12 = 16678606128581703575ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
