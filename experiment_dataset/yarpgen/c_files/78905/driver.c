#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-26;
unsigned int var_6 = 1207347712U;
unsigned int var_7 = 1320249548U;
short var_11 = (short)-9855;
unsigned int var_14 = 3091635318U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 242762387U;
unsigned int var_20 = 2895202220U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
