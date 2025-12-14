#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)108;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-29;
unsigned char var_11 = (unsigned char)112;
signed char var_13 = (signed char)-60;
unsigned short var_14 = (unsigned short)57805;
unsigned short var_16 = (unsigned short)42854;
unsigned char var_18 = (unsigned char)151;
int zero = 0;
unsigned long long int var_20 = 10540185090105793312ULL;
short var_21 = (short)-25455;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
