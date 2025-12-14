#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)240;
_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)-14;
unsigned long long int var_11 = 14970082591099312897ULL;
int zero = 0;
int var_12 = 1228145730;
short var_13 = (short)30599;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
