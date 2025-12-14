#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)50;
long long int var_3 = -3746538233208678717LL;
int var_4 = -1987606153;
signed char var_6 = (signed char)-90;
long long int var_10 = 2601179914263265540LL;
unsigned char var_12 = (unsigned char)192;
int zero = 0;
long long int var_13 = 7665197933733442746LL;
unsigned short var_14 = (unsigned short)10561;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
