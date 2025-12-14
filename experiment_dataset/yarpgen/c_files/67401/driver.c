#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1919039254;
short var_1 = (short)18599;
unsigned short var_2 = (unsigned short)55138;
long long int var_5 = 4511671468334060161LL;
unsigned short var_8 = (unsigned short)8012;
unsigned int var_11 = 3105764303U;
unsigned int var_12 = 2966335225U;
unsigned long long int var_13 = 6802619177671170407ULL;
short var_15 = (short)-31572;
unsigned int var_17 = 217001450U;
int zero = 0;
unsigned short var_20 = (unsigned short)65150;
unsigned long long int var_21 = 12204486572290252966ULL;
unsigned long long int var_22 = 18140708961609211406ULL;
unsigned int var_23 = 1877548620U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
