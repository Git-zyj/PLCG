#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)8709;
unsigned long long int var_12 = 2561863360530955018ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 3301658583809212854ULL;
short var_15 = (short)-30472;
void init() {
}

void checksum() {
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
