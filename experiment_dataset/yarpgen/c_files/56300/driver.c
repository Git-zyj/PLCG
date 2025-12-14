#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4266716183U;
short var_2 = (short)-296;
signed char var_4 = (signed char)56;
short var_6 = (short)-11414;
int var_11 = -1453337912;
short var_14 = (short)-30702;
unsigned int var_16 = 2030350378U;
int zero = 0;
signed char var_18 = (signed char)5;
long long int var_19 = 7759644415748727321LL;
void init() {
}

void checksum() {
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
