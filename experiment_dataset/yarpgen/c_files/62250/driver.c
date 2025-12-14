#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1233880779;
unsigned char var_6 = (unsigned char)53;
signed char var_9 = (signed char)-69;
unsigned short var_10 = (unsigned short)26161;
int var_12 = -1735039689;
int var_14 = 593778354;
unsigned char var_15 = (unsigned char)122;
unsigned int var_17 = 3632273655U;
int zero = 0;
unsigned char var_19 = (unsigned char)203;
unsigned char var_20 = (unsigned char)119;
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
