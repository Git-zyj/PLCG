#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)68;
unsigned long long int var_3 = 2288962622288321202ULL;
short var_11 = (short)4946;
int zero = 0;
int var_15 = 1921568210;
unsigned long long int var_16 = 3562124359230524041ULL;
unsigned long long int var_17 = 18182186759732985741ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
