#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -774574082;
unsigned int var_1 = 254744987U;
unsigned int var_3 = 1753083919U;
int var_5 = 1559768844;
unsigned short var_6 = (unsigned short)28668;
signed char var_7 = (signed char)20;
int zero = 0;
unsigned char var_10 = (unsigned char)186;
unsigned short var_11 = (unsigned short)30976;
unsigned int var_12 = 2574533513U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
