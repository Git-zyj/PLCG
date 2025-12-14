#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53633;
unsigned long long int var_4 = 14070273001827670486ULL;
short var_5 = (short)-951;
unsigned long long int var_12 = 16949978715235536998ULL;
unsigned short var_13 = (unsigned short)18992;
short var_15 = (short)31083;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 7155948048864414688ULL;
short var_18 = (short)14176;
unsigned short var_19 = (unsigned short)34364;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
