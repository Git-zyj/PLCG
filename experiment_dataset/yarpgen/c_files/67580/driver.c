#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)16116;
int var_4 = -1237960446;
int var_8 = -1607075192;
short var_9 = (short)669;
unsigned char var_11 = (unsigned char)106;
int var_12 = -561361200;
unsigned short var_13 = (unsigned short)56366;
int zero = 0;
signed char var_14 = (signed char)24;
signed char var_15 = (signed char)-40;
unsigned char var_16 = (unsigned char)152;
signed char var_17 = (signed char)-32;
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
