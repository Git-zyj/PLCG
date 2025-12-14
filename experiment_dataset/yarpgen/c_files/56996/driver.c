#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3269;
short var_3 = (short)-15998;
signed char var_7 = (signed char)-52;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)56078;
short var_11 = (short)-18580;
int zero = 0;
short var_12 = (short)-23318;
_Bool var_13 = (_Bool)0;
int var_14 = 1531933846;
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
