#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-125;
int var_5 = -1851841964;
long long int var_6 = 72768713149397877LL;
long long int var_8 = 5568931135340073445LL;
unsigned short var_11 = (unsigned short)7109;
signed char var_12 = (signed char)-30;
signed char var_14 = (signed char)-4;
unsigned short var_15 = (unsigned short)46189;
int var_16 = -472349647;
unsigned char var_17 = (unsigned char)2;
unsigned int var_18 = 1852410508U;
short var_19 = (short)23715;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)249;
unsigned int var_22 = 668118623U;
unsigned char var_23 = (unsigned char)185;
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
