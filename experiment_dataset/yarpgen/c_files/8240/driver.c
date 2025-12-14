#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12026853355050260105ULL;
signed char var_1 = (signed char)32;
int var_2 = -818543234;
short var_3 = (short)-23158;
unsigned short var_5 = (unsigned short)35184;
int var_6 = -1521151342;
int var_7 = 1533513339;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 13759197491415024101ULL;
int zero = 0;
int var_11 = -2060580010;
int var_12 = 865362564;
unsigned long long int var_13 = 6038443531622696275ULL;
long long int var_14 = 2234189508479516174LL;
unsigned short var_15 = (unsigned short)2184;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
