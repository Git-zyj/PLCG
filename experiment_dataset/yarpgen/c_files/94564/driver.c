#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)8286;
unsigned char var_12 = (unsigned char)186;
unsigned short var_13 = (unsigned short)21878;
long long int var_14 = 3419678383809511402LL;
unsigned char var_16 = (unsigned char)73;
unsigned short var_17 = (unsigned short)35368;
unsigned int var_18 = 4200261348U;
int zero = 0;
signed char var_19 = (signed char)102;
unsigned short var_20 = (unsigned short)40670;
unsigned char var_21 = (unsigned char)69;
void init() {
}

void checksum() {
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
