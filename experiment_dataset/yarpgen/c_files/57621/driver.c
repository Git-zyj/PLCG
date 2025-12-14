#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1950655237;
signed char var_8 = (signed char)94;
long long int var_12 = -2656070045156358157LL;
unsigned long long int var_14 = 564748249998217853ULL;
signed char var_15 = (signed char)83;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_17 = (short)16252;
int var_18 = 1321553943;
signed char var_19 = (signed char)-103;
signed char var_20 = (signed char)-95;
signed char var_21 = (signed char)118;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
