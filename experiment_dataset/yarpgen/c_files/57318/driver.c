#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23015;
unsigned short var_4 = (unsigned short)56386;
signed char var_5 = (signed char)97;
signed char var_8 = (signed char)108;
signed char var_13 = (signed char)126;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int var_19 = 1770429091;
int zero = 0;
unsigned long long int var_20 = 5342028459813364915ULL;
signed char var_21 = (signed char)56;
void init() {
}

void checksum() {
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
