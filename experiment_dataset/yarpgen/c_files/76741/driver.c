#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27408;
signed char var_1 = (signed char)21;
signed char var_2 = (signed char)30;
signed char var_3 = (signed char)59;
unsigned short var_4 = (unsigned short)9400;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-108;
int var_11 = -238108331;
unsigned short var_13 = (unsigned short)34974;
int zero = 0;
unsigned short var_14 = (unsigned short)45914;
signed char var_15 = (signed char)-32;
unsigned short var_16 = (unsigned short)50859;
unsigned short var_17 = (unsigned short)56301;
void init() {
}

void checksum() {
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
