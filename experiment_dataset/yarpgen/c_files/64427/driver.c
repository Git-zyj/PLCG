#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)17;
short var_3 = (short)1862;
unsigned char var_6 = (unsigned char)118;
unsigned short var_7 = (unsigned short)23491;
unsigned short var_8 = (unsigned short)47231;
signed char var_9 = (signed char)69;
signed char var_10 = (signed char)122;
int zero = 0;
unsigned short var_12 = (unsigned short)32042;
int var_13 = -1593867984;
signed char var_14 = (signed char)85;
unsigned int var_15 = 4206930462U;
signed char var_16 = (signed char)106;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
