#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2526091230U;
unsigned char var_2 = (unsigned char)67;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
int var_5 = -904277866;
short var_6 = (short)-27157;
int var_7 = 922679049;
short var_8 = (short)1509;
unsigned short var_10 = (unsigned short)44658;
unsigned long long int var_11 = 8329128916030862425ULL;
short var_12 = (short)11692;
signed char var_13 = (signed char)111;
short var_14 = (short)-2857;
int zero = 0;
unsigned long long int var_15 = 6691097892991193255ULL;
int var_16 = 1064597745;
signed char var_17 = (signed char)64;
unsigned char var_18 = (unsigned char)100;
_Bool var_19 = (_Bool)1;
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
