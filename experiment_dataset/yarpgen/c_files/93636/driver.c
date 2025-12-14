#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18826;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-11758;
signed char var_8 = (signed char)-99;
signed char var_15 = (signed char)-81;
int zero = 0;
signed char var_16 = (signed char)40;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)12587;
unsigned char var_19 = (unsigned char)160;
unsigned long long int var_20 = 5614438515822911058ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
