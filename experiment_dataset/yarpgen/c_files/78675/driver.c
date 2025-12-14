#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12799505877439236074ULL;
signed char var_4 = (signed char)105;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-104;
signed char var_7 = (signed char)105;
unsigned long long int var_8 = 4991727638410462456ULL;
unsigned int var_12 = 1428364665U;
unsigned short var_13 = (unsigned short)22103;
unsigned short var_15 = (unsigned short)26795;
unsigned char var_16 = (unsigned char)159;
unsigned char var_17 = (unsigned char)247;
short var_18 = (short)-23064;
int zero = 0;
signed char var_20 = (signed char)87;
short var_21 = (short)10235;
unsigned char var_22 = (unsigned char)18;
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
