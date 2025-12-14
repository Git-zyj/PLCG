#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6784205633156308834ULL;
signed char var_2 = (signed char)-58;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-95;
unsigned char var_5 = (unsigned char)171;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-5709;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 10061546210201639883ULL;
unsigned int var_12 = 1011952620U;
signed char var_18 = (signed char)96;
signed char var_19 = (signed char)-54;
int zero = 0;
short var_20 = (short)23446;
_Bool var_21 = (_Bool)0;
short var_22 = (short)13332;
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
