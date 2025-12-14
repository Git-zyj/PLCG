#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
signed char var_1 = (signed char)10;
signed char var_3 = (signed char)110;
short var_4 = (short)14416;
unsigned int var_6 = 719171250U;
unsigned int var_12 = 3798487812U;
unsigned char var_15 = (unsigned char)243;
int zero = 0;
unsigned int var_16 = 3858177673U;
signed char var_17 = (signed char)-94;
short var_18 = (short)-19413;
long long int var_19 = -1669085630757773425LL;
signed char var_20 = (signed char)-117;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
