#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48913;
unsigned short var_3 = (unsigned short)35351;
_Bool var_4 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)6660;
unsigned char var_12 = (unsigned char)239;
int zero = 0;
short var_14 = (short)23468;
signed char var_15 = (signed char)51;
unsigned long long int var_16 = 17059115983169311412ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
