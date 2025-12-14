#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)110;
signed char var_1 = (signed char)100;
short var_2 = (short)29832;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3071648681U;
signed char var_6 = (signed char)-80;
short var_8 = (short)-15980;
unsigned short var_9 = (unsigned short)23181;
unsigned int var_10 = 809002698U;
unsigned int var_11 = 2983591792U;
int zero = 0;
unsigned char var_12 = (unsigned char)153;
unsigned short var_13 = (unsigned short)39517;
unsigned char var_14 = (unsigned char)16;
unsigned char var_15 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
