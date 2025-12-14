#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28524;
unsigned short var_2 = (unsigned short)40089;
int var_4 = -2026415014;
unsigned short var_11 = (unsigned short)32877;
unsigned short var_13 = (unsigned short)15418;
int zero = 0;
unsigned long long int var_14 = 2534426227758349176ULL;
unsigned short var_15 = (unsigned short)46179;
long long int var_16 = -747120899926587099LL;
void init() {
}

void checksum() {
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
