#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5795012767566272488LL;
signed char var_1 = (signed char)50;
unsigned long long int var_3 = 12050933708914471803ULL;
signed char var_8 = (signed char)109;
signed char var_11 = (signed char)18;
unsigned long long int var_12 = 5726546599180070646ULL;
unsigned short var_13 = (unsigned short)56044;
int zero = 0;
short var_15 = (short)-27545;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
