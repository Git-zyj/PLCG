#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19630;
short var_1 = (short)-3357;
short var_3 = (short)22036;
unsigned int var_4 = 2950979526U;
unsigned long long int var_5 = 17789128947696209048ULL;
unsigned int var_6 = 3936197404U;
signed char var_8 = (signed char)99;
unsigned int var_9 = 3808307008U;
int zero = 0;
signed char var_12 = (signed char)-50;
int var_13 = -1482167773;
unsigned int var_14 = 549944764U;
short var_15 = (short)23920;
short var_16 = (short)-6689;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
