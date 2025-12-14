#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21401;
unsigned char var_3 = (unsigned char)198;
_Bool var_5 = (_Bool)0;
int var_7 = 2046886650;
unsigned char var_8 = (unsigned char)32;
unsigned int var_9 = 2617128049U;
int var_10 = -1269725997;
int zero = 0;
unsigned char var_11 = (unsigned char)82;
short var_12 = (short)31005;
signed char var_13 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
