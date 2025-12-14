#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -657203922;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
int var_5 = 550286801;
signed char var_6 = (signed char)43;
unsigned char var_7 = (unsigned char)66;
signed char var_8 = (signed char)-57;
int zero = 0;
unsigned long long int var_10 = 1099239178135322230ULL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)20259;
unsigned short var_13 = (unsigned short)3270;
short var_14 = (short)10138;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
