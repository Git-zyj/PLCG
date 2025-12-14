#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16806555541625083799ULL;
signed char var_7 = (signed char)40;
unsigned short var_17 = (unsigned short)36597;
unsigned short var_18 = (unsigned short)29159;
int zero = 0;
signed char var_20 = (signed char)-34;
unsigned short var_21 = (unsigned short)52182;
unsigned char var_22 = (unsigned char)114;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
