#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-104;
unsigned int var_8 = 1192807458U;
short var_9 = (short)27304;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-1798;
int zero = 0;
unsigned char var_13 = (unsigned char)16;
_Bool var_14 = (_Bool)1;
int var_15 = 33845096;
unsigned short var_16 = (unsigned short)37249;
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
