#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11607;
long long int var_1 = 1903496923934041217LL;
short var_3 = (short)-24017;
unsigned short var_4 = (unsigned short)16310;
unsigned int var_5 = 1408718034U;
int var_8 = -1286847683;
signed char var_10 = (signed char)18;
int var_11 = 1210524232;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1215038712U;
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
