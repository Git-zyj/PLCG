#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1059008622;
unsigned short var_3 = (unsigned short)55268;
short var_4 = (short)10789;
int var_6 = -12034384;
unsigned char var_8 = (unsigned char)217;
unsigned char var_9 = (unsigned char)84;
int zero = 0;
unsigned int var_12 = 2770410858U;
_Bool var_13 = (_Bool)0;
int var_14 = 439836643;
short var_15 = (short)-20401;
unsigned short var_16 = (unsigned short)56437;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
