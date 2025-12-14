#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11141761706996455935ULL;
short var_5 = (short)15203;
unsigned long long int var_6 = 1029614135983077202ULL;
short var_11 = (short)29708;
unsigned short var_14 = (unsigned short)3350;
unsigned long long int var_15 = 2787984990121591295ULL;
int var_17 = -2012737044;
int zero = 0;
int var_18 = -1945091221;
signed char var_19 = (signed char)65;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)23770;
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
