#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -219519156;
int var_10 = 1934946642;
signed char var_11 = (signed char)-124;
signed char var_13 = (signed char)-67;
signed char var_17 = (signed char)4;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 1041501982;
unsigned long long int var_21 = 1226613904226185854ULL;
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
