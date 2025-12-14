#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)15645;
unsigned short var_11 = (unsigned short)62315;
unsigned char var_13 = (unsigned char)15;
int zero = 0;
unsigned long long int var_16 = 18197397613369345857ULL;
signed char var_17 = (signed char)29;
unsigned short var_18 = (unsigned short)42302;
unsigned char var_19 = (unsigned char)162;
void init() {
}

void checksum() {
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
