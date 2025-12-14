#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25286;
_Bool var_3 = (_Bool)1;
short var_6 = (short)-18854;
unsigned char var_14 = (unsigned char)81;
unsigned short var_15 = (unsigned short)44878;
_Bool var_17 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)-15000;
unsigned long long int var_21 = 329397220813659884ULL;
signed char var_22 = (signed char)19;
unsigned int var_23 = 3978918907U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
