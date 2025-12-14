#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19493;
short var_2 = (short)15103;
unsigned int var_7 = 1765026830U;
short var_8 = (short)-11501;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 13614134299012854472ULL;
unsigned int var_17 = 1351382171U;
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
