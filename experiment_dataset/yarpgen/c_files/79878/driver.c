#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1202928594;
unsigned short var_3 = (unsigned short)20208;
signed char var_7 = (signed char)-90;
short var_14 = (short)31247;
short var_15 = (short)11119;
int zero = 0;
unsigned short var_20 = (unsigned short)51155;
unsigned char var_21 = (unsigned char)148;
unsigned int var_22 = 837856481U;
signed char var_23 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
