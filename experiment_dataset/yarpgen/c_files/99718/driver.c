#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56561;
unsigned int var_1 = 2329591120U;
unsigned short var_3 = (unsigned short)44559;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-100;
short var_7 = (short)-11962;
unsigned char var_8 = (unsigned char)251;
signed char var_9 = (signed char)-122;
unsigned short var_10 = (unsigned short)60316;
int zero = 0;
signed char var_15 = (signed char)55;
int var_16 = -1440770649;
int var_17 = -830323669;
signed char var_18 = (signed char)86;
short var_19 = (short)-18517;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
