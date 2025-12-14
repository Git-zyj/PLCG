#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)29933;
int var_5 = 1939041203;
long long int var_6 = -4083137645929168751LL;
unsigned char var_11 = (unsigned char)62;
short var_12 = (short)-7997;
int zero = 0;
unsigned char var_16 = (unsigned char)89;
signed char var_17 = (signed char)83;
_Bool var_18 = (_Bool)1;
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
