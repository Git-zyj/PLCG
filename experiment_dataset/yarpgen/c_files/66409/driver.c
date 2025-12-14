#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32384;
unsigned long long int var_1 = 8842137998318021376ULL;
signed char var_4 = (signed char)-85;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-82;
unsigned short var_8 = (unsigned short)20190;
unsigned int var_9 = 3277141995U;
unsigned int var_10 = 1614957615U;
signed char var_11 = (signed char)64;
signed char var_12 = (signed char)-55;
signed char var_13 = (signed char)110;
int zero = 0;
signed char var_14 = (signed char)74;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)36;
short var_17 = (short)6820;
unsigned short var_18 = (unsigned short)57156;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
