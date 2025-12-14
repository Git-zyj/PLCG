#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9104;
signed char var_6 = (signed char)69;
unsigned char var_7 = (unsigned char)206;
signed char var_8 = (signed char)46;
unsigned char var_12 = (unsigned char)146;
signed char var_15 = (signed char)87;
int zero = 0;
unsigned char var_18 = (unsigned char)249;
signed char var_19 = (signed char)-124;
unsigned int var_20 = 2153229253U;
short var_21 = (short)10614;
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
