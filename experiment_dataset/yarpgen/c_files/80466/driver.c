#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22676;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-349;
int var_3 = -1993261058;
unsigned long long int var_4 = 11322636403432396214ULL;
unsigned int var_9 = 2492010989U;
int zero = 0;
unsigned char var_11 = (unsigned char)116;
unsigned short var_12 = (unsigned short)37012;
signed char var_13 = (signed char)-14;
signed char var_14 = (signed char)118;
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
