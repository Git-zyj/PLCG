#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
signed char var_2 = (signed char)-64;
unsigned char var_4 = (unsigned char)64;
unsigned short var_5 = (unsigned short)39632;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_11 = (short)-31946;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
