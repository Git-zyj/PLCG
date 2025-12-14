#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3232809066U;
_Bool var_1 = (_Bool)0;
unsigned char var_6 = (unsigned char)196;
short var_7 = (short)-19669;
long long int var_9 = 7453982905102119691LL;
unsigned long long int var_11 = 10719538130441360397ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)21;
signed char var_13 = (signed char)91;
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
