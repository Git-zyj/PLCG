#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2036876241;
short var_2 = (short)-10533;
unsigned int var_6 = 2087073395U;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)51;
unsigned int var_9 = 3360819668U;
unsigned short var_10 = (unsigned short)15469;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 9255593784965020964ULL;
unsigned short var_13 = (unsigned short)48589;
int zero = 0;
short var_14 = (short)18642;
unsigned long long int var_15 = 11378244149773501054ULL;
signed char var_16 = (signed char)-55;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
