#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4247933725U;
unsigned short var_4 = (unsigned short)3693;
unsigned int var_5 = 804555499U;
int var_6 = -350763145;
unsigned int var_7 = 2878307656U;
signed char var_8 = (signed char)36;
int var_9 = 2048416658;
unsigned short var_10 = (unsigned short)6496;
unsigned int var_11 = 3865665855U;
int zero = 0;
unsigned int var_12 = 2156103152U;
unsigned int var_13 = 2920329242U;
short var_14 = (short)-9536;
int var_15 = 407954643;
unsigned short var_16 = (unsigned short)7880;
unsigned char var_17 = (unsigned char)115;
short var_18 = (short)-4183;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
