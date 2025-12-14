#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56926;
unsigned char var_1 = (unsigned char)113;
int var_2 = 976896308;
signed char var_6 = (signed char)-76;
short var_7 = (short)16402;
int zero = 0;
unsigned int var_12 = 3240774777U;
int var_13 = 1401213023;
signed char var_14 = (signed char)-2;
unsigned short var_15 = (unsigned short)47583;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
