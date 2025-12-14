#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 548456520U;
_Bool var_2 = (_Bool)1;
int var_3 = 1029834819;
_Bool var_4 = (_Bool)1;
unsigned char var_10 = (unsigned char)53;
int var_11 = 1467174463;
int zero = 0;
short var_13 = (short)-26892;
unsigned char var_14 = (unsigned char)28;
unsigned short var_15 = (unsigned short)18279;
int var_16 = -300485156;
unsigned int var_17 = 1740026833U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
