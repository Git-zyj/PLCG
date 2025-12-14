#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-56;
long long int var_4 = -5910965923006069967LL;
short var_8 = (short)-22209;
short var_9 = (short)-19917;
int zero = 0;
unsigned long long int var_11 = 9847282318355854052ULL;
unsigned int var_12 = 1523368541U;
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
