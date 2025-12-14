#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-7;
unsigned short var_1 = (unsigned short)36216;
unsigned long long int var_2 = 12572419025199764057ULL;
short var_3 = (short)-29971;
signed char var_5 = (signed char)65;
unsigned short var_6 = (unsigned short)10431;
unsigned char var_7 = (unsigned char)168;
unsigned char var_8 = (unsigned char)107;
unsigned short var_10 = (unsigned short)60293;
int zero = 0;
unsigned long long int var_12 = 9168373265700038087ULL;
unsigned char var_13 = (unsigned char)169;
signed char var_14 = (signed char)-72;
unsigned int var_15 = 2307188778U;
unsigned int var_16 = 3890115102U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
