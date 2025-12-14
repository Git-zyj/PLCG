#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)64533;
signed char var_3 = (signed char)-108;
short var_4 = (short)-1644;
unsigned long long int var_5 = 11389379617397685293ULL;
short var_6 = (short)30369;
short var_9 = (short)286;
_Bool var_10 = (_Bool)0;
long long int var_11 = -6630900645746132927LL;
short var_12 = (short)-15539;
long long int var_13 = -6243433626109993409LL;
signed char var_14 = (signed char)115;
long long int var_15 = 8353645914552684445LL;
int zero = 0;
int var_16 = 321510600;
unsigned char var_17 = (unsigned char)28;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
