#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-119;
signed char var_2 = (signed char)-41;
unsigned short var_4 = (unsigned short)11230;
signed char var_6 = (signed char)-11;
unsigned short var_8 = (unsigned short)5914;
unsigned short var_10 = (unsigned short)12069;
unsigned short var_14 = (unsigned short)40505;
signed char var_15 = (signed char)-31;
unsigned short var_16 = (unsigned short)38725;
signed char var_17 = (signed char)-17;
signed char var_18 = (signed char)11;
int zero = 0;
signed char var_19 = (signed char)-86;
unsigned short var_20 = (unsigned short)5133;
unsigned short var_21 = (unsigned short)23710;
signed char var_22 = (signed char)-86;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
