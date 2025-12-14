#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26924;
unsigned int var_4 = 1735683116U;
unsigned long long int var_5 = 1373756000682583209ULL;
unsigned int var_7 = 3999581473U;
unsigned int var_13 = 211506202U;
unsigned int var_16 = 4098682072U;
int zero = 0;
unsigned long long int var_18 = 11973416613600662728ULL;
unsigned int var_19 = 2749554778U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
