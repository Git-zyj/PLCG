#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4100060018U;
signed char var_1 = (signed char)24;
unsigned short var_3 = (unsigned short)55749;
_Bool var_5 = (_Bool)1;
int var_7 = 602473971;
unsigned int var_13 = 7470481U;
unsigned int var_17 = 3256076842U;
short var_18 = (short)17441;
int zero = 0;
int var_19 = 1473350741;
int var_20 = 1223109998;
signed char var_21 = (signed char)-61;
unsigned long long int var_22 = 8340087613124888870ULL;
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
