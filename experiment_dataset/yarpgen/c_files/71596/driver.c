#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -134809536;
unsigned char var_4 = (unsigned char)164;
short var_7 = (short)13767;
int var_11 = -173487406;
signed char var_14 = (signed char)-19;
int zero = 0;
unsigned short var_19 = (unsigned short)51811;
unsigned int var_20 = 2473872665U;
void init() {
}

void checksum() {
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
