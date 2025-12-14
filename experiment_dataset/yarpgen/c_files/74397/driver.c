#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 161217356;
signed char var_6 = (signed char)116;
unsigned short var_7 = (unsigned short)50073;
short var_8 = (short)-27821;
signed char var_10 = (signed char)-24;
int zero = 0;
signed char var_13 = (signed char)-107;
unsigned short var_14 = (unsigned short)64580;
int var_15 = -1547375289;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
