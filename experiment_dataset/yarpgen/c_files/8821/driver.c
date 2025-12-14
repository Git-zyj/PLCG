#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6025625934692585302LL;
long long int var_4 = 9049779444047958558LL;
short var_6 = (short)4701;
unsigned short var_8 = (unsigned short)55122;
short var_11 = (short)-16107;
unsigned char var_13 = (unsigned char)185;
int zero = 0;
signed char var_16 = (signed char)-29;
unsigned short var_17 = (unsigned short)14910;
void init() {
}

void checksum() {
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
