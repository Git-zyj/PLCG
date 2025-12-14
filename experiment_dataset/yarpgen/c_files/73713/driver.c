#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
unsigned short var_5 = (unsigned short)17127;
unsigned int var_7 = 2743576300U;
long long int var_8 = 8146037202255365714LL;
signed char var_9 = (signed char)-9;
int zero = 0;
short var_12 = (short)7092;
unsigned long long int var_13 = 11262733152431321426ULL;
short var_14 = (short)-28563;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
