#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 11936763;
unsigned char var_1 = (unsigned char)183;
signed char var_2 = (signed char)-101;
short var_5 = (short)22033;
short var_6 = (short)5694;
unsigned long long int var_7 = 1027879014946071674ULL;
_Bool var_8 = (_Bool)0;
int var_14 = -1429514930;
int zero = 0;
unsigned int var_17 = 2818223245U;
short var_18 = (short)-11470;
unsigned int var_19 = 4040296548U;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
