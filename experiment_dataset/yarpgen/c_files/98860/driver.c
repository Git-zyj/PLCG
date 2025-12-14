#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)120;
signed char var_3 = (signed char)74;
short var_4 = (short)27873;
short var_5 = (short)-10582;
int var_6 = -1269342579;
signed char var_7 = (signed char)-71;
unsigned char var_11 = (unsigned char)64;
unsigned int var_13 = 3924906399U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)154;
unsigned char var_16 = (unsigned char)63;
signed char var_17 = (signed char)-115;
unsigned short var_18 = (unsigned short)7971;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
