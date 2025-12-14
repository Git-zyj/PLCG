#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -58165804;
short var_4 = (short)-29102;
int var_12 = -484672678;
signed char var_14 = (signed char)111;
signed char var_16 = (signed char)-61;
int zero = 0;
unsigned long long int var_18 = 6933892515408585716ULL;
unsigned short var_19 = (unsigned short)31139;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
