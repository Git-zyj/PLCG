#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4065;
signed char var_1 = (signed char)-66;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 13346110960635255494ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)51281;
unsigned long long int var_11 = 9954012476195269455ULL;
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
