#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -820921985;
unsigned char var_2 = (unsigned char)56;
unsigned short var_4 = (unsigned short)23901;
int var_10 = 1706796169;
short var_13 = (short)16382;
int var_14 = -1074852929;
unsigned short var_15 = (unsigned short)40073;
unsigned int var_16 = 956250970U;
int zero = 0;
short var_18 = (short)-31197;
unsigned int var_19 = 1067523682U;
unsigned short var_20 = (unsigned short)22369;
unsigned short var_21 = (unsigned short)39434;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
