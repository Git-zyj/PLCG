#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -999365353;
int var_2 = -229272254;
int var_3 = -1423064404;
signed char var_5 = (signed char)-99;
unsigned long long int var_7 = 3267438731349787299ULL;
short var_9 = (short)-18627;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2091579895U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
