#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16240956537259919825ULL;
int var_3 = -1293510432;
short var_7 = (short)31117;
unsigned int var_14 = 4015798073U;
int zero = 0;
int var_15 = -1539069479;
short var_16 = (short)-2775;
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
