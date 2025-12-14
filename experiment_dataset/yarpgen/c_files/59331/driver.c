#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4163455770U;
unsigned char var_3 = (unsigned char)139;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-5592;
int var_7 = -204009032;
int var_8 = -611570427;
unsigned int var_9 = 1598665234U;
int var_10 = 891615609;
unsigned short var_11 = (unsigned short)56448;
unsigned int var_14 = 3344937079U;
short var_16 = (short)-29913;
int zero = 0;
unsigned char var_18 = (unsigned char)58;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)36;
short var_21 = (short)1458;
void init() {
}

void checksum() {
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
