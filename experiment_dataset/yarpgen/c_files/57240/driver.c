#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1457222053U;
unsigned int var_6 = 31259229U;
unsigned long long int var_9 = 944343829362658639ULL;
int zero = 0;
short var_11 = (short)23162;
unsigned int var_12 = 1656791605U;
short var_13 = (short)16353;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
