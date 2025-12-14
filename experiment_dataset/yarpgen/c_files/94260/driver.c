#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)84;
signed char var_7 = (signed char)100;
unsigned char var_8 = (unsigned char)39;
short var_10 = (short)-21772;
unsigned short var_11 = (unsigned short)28287;
signed char var_12 = (signed char)-72;
int zero = 0;
signed char var_17 = (signed char)-13;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)106;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
