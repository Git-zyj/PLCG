#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)5;
unsigned short var_5 = (unsigned short)32694;
unsigned char var_6 = (unsigned char)173;
unsigned int var_7 = 37108922U;
signed char var_12 = (signed char)-58;
int zero = 0;
signed char var_13 = (signed char)68;
short var_14 = (short)-3649;
unsigned char var_15 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
