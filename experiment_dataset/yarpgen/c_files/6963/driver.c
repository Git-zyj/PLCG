#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 193219334;
unsigned short var_5 = (unsigned short)56303;
signed char var_7 = (signed char)-112;
short var_9 = (short)-29084;
unsigned long long int var_10 = 11601232542985234942ULL;
signed char var_12 = (signed char)117;
unsigned char var_15 = (unsigned char)49;
unsigned long long int var_16 = 16608420529549145569ULL;
int zero = 0;
unsigned long long int var_17 = 3730257674658511480ULL;
int var_18 = -2101326704;
int var_19 = 1353665802;
int var_20 = -1767660497;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
