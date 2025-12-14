#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 936595001U;
unsigned long long int var_4 = 12242534571180533433ULL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)14;
signed char var_7 = (signed char)-103;
_Bool var_8 = (_Bool)0;
short var_11 = (short)-26726;
signed char var_13 = (signed char)71;
unsigned int var_15 = 279858332U;
signed char var_16 = (signed char)59;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-69;
unsigned long long int var_19 = 1795013086140704479ULL;
signed char var_20 = (signed char)-29;
unsigned char var_21 = (unsigned char)224;
unsigned short var_22 = (unsigned short)15825;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
