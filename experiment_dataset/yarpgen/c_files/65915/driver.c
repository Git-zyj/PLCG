#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1187775975;
short var_2 = (short)-25667;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2001255056U;
unsigned int var_5 = 2870215880U;
short var_7 = (short)1135;
unsigned char var_8 = (unsigned char)53;
int zero = 0;
unsigned short var_10 = (unsigned short)8287;
unsigned int var_11 = 4229648235U;
unsigned long long int var_12 = 2306658952259824802ULL;
unsigned char var_13 = (unsigned char)61;
unsigned long long int var_14 = 3027237181716022259ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
