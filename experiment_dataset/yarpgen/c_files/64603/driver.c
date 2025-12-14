#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56198;
signed char var_3 = (signed char)-26;
unsigned short var_6 = (unsigned short)52694;
signed char var_7 = (signed char)51;
long long int var_9 = 527160227374389476LL;
int zero = 0;
long long int var_13 = 5110726534421320116LL;
unsigned short var_14 = (unsigned short)50740;
void init() {
}

void checksum() {
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
