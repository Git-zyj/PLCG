#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5242;
int var_2 = -1997973473;
unsigned short var_5 = (unsigned short)3069;
signed char var_8 = (signed char)-86;
unsigned short var_10 = (unsigned short)37089;
signed char var_11 = (signed char)37;
int zero = 0;
int var_12 = -582566994;
signed char var_13 = (signed char)-105;
unsigned char var_14 = (unsigned char)50;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
