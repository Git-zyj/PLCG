#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -610827813;
signed char var_3 = (signed char)-103;
short var_5 = (short)-23885;
signed char var_7 = (signed char)60;
signed char var_10 = (signed char)107;
short var_13 = (short)29047;
unsigned long long int var_15 = 2677123868565786480ULL;
unsigned short var_18 = (unsigned short)15907;
int zero = 0;
unsigned short var_20 = (unsigned short)24432;
signed char var_21 = (signed char)34;
unsigned int var_22 = 2491781417U;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-11469;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
