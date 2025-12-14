#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2582820918U;
unsigned char var_3 = (unsigned char)139;
unsigned long long int var_7 = 3916961308975631532ULL;
unsigned char var_8 = (unsigned char)59;
short var_9 = (short)-21876;
signed char var_11 = (signed char)118;
signed char var_12 = (signed char)-105;
unsigned long long int var_14 = 16348456835414781922ULL;
unsigned short var_17 = (unsigned short)37303;
signed char var_19 = (signed char)54;
int zero = 0;
int var_20 = -1931858953;
signed char var_21 = (signed char)-33;
int var_22 = 1931651331;
void init() {
}

void checksum() {
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
