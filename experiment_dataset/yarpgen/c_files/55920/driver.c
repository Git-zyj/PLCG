#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8960803465922909574ULL;
unsigned char var_2 = (unsigned char)89;
int var_3 = -1471266051;
signed char var_4 = (signed char)64;
long long int var_5 = 3735340914269830030LL;
unsigned char var_6 = (unsigned char)189;
unsigned char var_8 = (unsigned char)122;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 23237723U;
short var_11 = (short)22333;
unsigned char var_12 = (unsigned char)200;
int zero = 0;
unsigned short var_13 = (unsigned short)42256;
unsigned char var_14 = (unsigned char)219;
unsigned long long int var_15 = 15275279607257959765ULL;
void init() {
}

void checksum() {
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
