#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 231132539;
unsigned int var_5 = 822506551U;
unsigned char var_7 = (unsigned char)208;
signed char var_10 = (signed char)-83;
unsigned char var_18 = (unsigned char)70;
int zero = 0;
signed char var_19 = (signed char)89;
short var_20 = (short)5379;
unsigned char var_21 = (unsigned char)75;
int var_22 = 2008608905;
short var_23 = (short)-5995;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
