#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5871386651699725830LL;
unsigned char var_3 = (unsigned char)101;
long long int var_5 = -2251230776282639507LL;
unsigned int var_6 = 3343123342U;
short var_7 = (short)15706;
unsigned char var_9 = (unsigned char)238;
unsigned char var_11 = (unsigned char)49;
int zero = 0;
signed char var_12 = (signed char)1;
unsigned short var_13 = (unsigned short)43808;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
