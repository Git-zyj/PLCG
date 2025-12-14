#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28580;
unsigned char var_3 = (unsigned char)10;
unsigned char var_4 = (unsigned char)61;
signed char var_6 = (signed char)68;
unsigned long long int var_7 = 5910826352904767456ULL;
int zero = 0;
short var_13 = (short)-29122;
long long int var_14 = 4478887866269560464LL;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
