#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)40757;
short var_5 = (short)16792;
unsigned int var_9 = 514906514U;
unsigned char var_10 = (unsigned char)84;
int zero = 0;
signed char var_19 = (signed char)55;
int var_20 = 1173110048;
unsigned short var_21 = (unsigned short)28536;
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
