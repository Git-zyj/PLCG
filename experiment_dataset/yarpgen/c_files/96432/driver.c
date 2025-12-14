#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-20113;
_Bool var_4 = (_Bool)1;
short var_8 = (short)15976;
int zero = 0;
short var_13 = (short)12496;
short var_14 = (short)-28616;
unsigned char var_15 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
