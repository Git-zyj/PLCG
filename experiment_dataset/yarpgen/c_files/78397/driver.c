#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-54;
_Bool var_2 = (_Bool)1;
unsigned short var_7 = (unsigned short)1549;
signed char var_10 = (signed char)-52;
int var_11 = 697283739;
short var_12 = (short)3065;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_18 = (short)-23260;
unsigned int var_19 = 1187978936U;
unsigned short var_20 = (unsigned short)49677;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
