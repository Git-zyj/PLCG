#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7120962152597033697LL;
signed char var_4 = (signed char)-92;
short var_8 = (short)25116;
int var_15 = -925047897;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_19 = (short)-17655;
signed char var_20 = (signed char)70;
void init() {
}

void checksum() {
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
