#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14200;
unsigned char var_4 = (unsigned char)184;
unsigned char var_6 = (unsigned char)186;
unsigned char var_7 = (unsigned char)223;
int var_8 = -1353341959;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)83;
int zero = 0;
signed char var_15 = (signed char)47;
int var_16 = -1197373619;
unsigned int var_17 = 3360103202U;
unsigned char var_18 = (unsigned char)50;
void init() {
}

void checksum() {
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
