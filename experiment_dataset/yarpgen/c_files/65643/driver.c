#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)32;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-20733;
signed char var_4 = (signed char)0;
unsigned short var_5 = (unsigned short)54576;
unsigned long long int var_6 = 4687580297489189139ULL;
signed char var_8 = (signed char)-52;
signed char var_9 = (signed char)87;
int zero = 0;
int var_11 = 1674856122;
short var_12 = (short)-20611;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
