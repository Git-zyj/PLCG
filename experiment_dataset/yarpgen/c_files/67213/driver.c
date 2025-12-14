#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10255;
int var_2 = 757509930;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-16858;
signed char var_7 = (signed char)-33;
int var_8 = -1654222861;
unsigned long long int var_9 = 13244310713146053286ULL;
short var_10 = (short)-15909;
unsigned short var_12 = (unsigned short)45944;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2626686667U;
int zero = 0;
signed char var_17 = (signed char)-91;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
