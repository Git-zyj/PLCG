#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9419;
short var_2 = (short)-2921;
unsigned long long int var_4 = 18194113959335814858ULL;
unsigned char var_5 = (unsigned char)92;
unsigned char var_6 = (unsigned char)169;
short var_7 = (short)30174;
unsigned long long int var_8 = 16324962133131112749ULL;
unsigned long long int var_9 = 10096876566164312035ULL;
unsigned int var_10 = 4251415332U;
short var_11 = (short)22859;
unsigned int var_12 = 3310852977U;
int zero = 0;
unsigned long long int var_13 = 58684026802720730ULL;
unsigned short var_14 = (unsigned short)33738;
unsigned char var_15 = (unsigned char)144;
unsigned char var_16 = (unsigned char)98;
unsigned long long int var_17 = 3987059478360472211ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
