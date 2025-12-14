#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 5205947228843957923ULL;
short var_3 = (short)15852;
unsigned int var_4 = 1920978566U;
unsigned int var_6 = 2210663082U;
unsigned int var_8 = 3897358167U;
unsigned char var_10 = (unsigned char)52;
short var_13 = (short)15538;
int zero = 0;
int var_16 = 692459927;
signed char var_17 = (signed char)-49;
int var_18 = 1436818026;
int var_19 = 1496180768;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
