#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6374;
short var_6 = (short)-8051;
long long int var_14 = -279524976734320381LL;
int zero = 0;
unsigned long long int var_17 = 8561594855743334751ULL;
unsigned long long int var_18 = 16390435114154457529ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
