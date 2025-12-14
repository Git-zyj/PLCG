#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)39;
short var_6 = (short)18986;
_Bool var_7 = (_Bool)1;
int zero = 0;
short var_11 = (short)-29811;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-17867;
signed char var_14 = (signed char)25;
unsigned short var_15 = (unsigned short)51371;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
