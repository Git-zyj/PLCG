#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2474791447752765160LL;
signed char var_2 = (signed char)-119;
unsigned int var_3 = 1032319485U;
unsigned char var_4 = (unsigned char)194;
unsigned int var_11 = 1598940721U;
unsigned short var_13 = (unsigned short)7849;
unsigned int var_14 = 105120222U;
int zero = 0;
signed char var_17 = (signed char)115;
int var_18 = 845209700;
unsigned long long int var_19 = 16216927194740378226ULL;
short var_20 = (short)25681;
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
