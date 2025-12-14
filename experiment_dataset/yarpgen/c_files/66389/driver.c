#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-16;
unsigned short var_2 = (unsigned short)63629;
unsigned short var_3 = (unsigned short)59934;
unsigned short var_6 = (unsigned short)53845;
unsigned char var_7 = (unsigned char)42;
unsigned char var_10 = (unsigned char)98;
unsigned short var_11 = (unsigned short)27895;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-41;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)120;
unsigned char var_17 = (unsigned char)148;
signed char var_18 = (signed char)47;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
