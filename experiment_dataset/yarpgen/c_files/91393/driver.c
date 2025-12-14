#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-27594;
_Bool var_3 = (_Bool)0;
int var_4 = 1077625423;
unsigned char var_5 = (unsigned char)16;
unsigned char var_6 = (unsigned char)83;
unsigned short var_8 = (unsigned short)28472;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_14 = (short)16899;
signed char var_15 = (signed char)-40;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 11236331033078678049ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
