#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-74;
short var_2 = (short)-3484;
short var_4 = (short)-8391;
unsigned short var_5 = (unsigned short)15297;
int var_13 = 415393944;
int zero = 0;
unsigned int var_17 = 1961301989U;
unsigned int var_18 = 3495110251U;
unsigned short var_19 = (unsigned short)4795;
unsigned int var_20 = 3830266417U;
unsigned int var_21 = 179357277U;
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
