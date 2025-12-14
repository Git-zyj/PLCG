#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45720;
unsigned short var_1 = (unsigned short)54858;
signed char var_4 = (signed char)-5;
int var_6 = 698490597;
short var_7 = (short)-29594;
short var_10 = (short)26157;
unsigned short var_11 = (unsigned short)20047;
short var_12 = (short)8469;
int zero = 0;
unsigned int var_14 = 3589109744U;
signed char var_15 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
