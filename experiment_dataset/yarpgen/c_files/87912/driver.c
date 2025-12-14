#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15270532279873392453ULL;
unsigned short var_1 = (unsigned short)26127;
unsigned int var_2 = 2859398113U;
unsigned short var_3 = (unsigned short)18756;
unsigned short var_4 = (unsigned short)56248;
short var_6 = (short)-28900;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1616117914U;
unsigned char var_12 = (unsigned char)26;
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
