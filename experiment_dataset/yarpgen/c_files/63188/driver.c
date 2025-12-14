#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3946;
short var_3 = (short)-15723;
unsigned long long int var_8 = 16047401382451694463ULL;
short var_13 = (short)8667;
int zero = 0;
int var_17 = -997785052;
short var_18 = (short)12213;
int var_19 = 2051819119;
signed char var_20 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
