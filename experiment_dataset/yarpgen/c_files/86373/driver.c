#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12186;
unsigned int var_1 = 4133350396U;
unsigned char var_2 = (unsigned char)173;
unsigned int var_5 = 4038144385U;
unsigned char var_7 = (unsigned char)11;
unsigned int var_8 = 3097485980U;
short var_10 = (short)-3318;
unsigned long long int var_12 = 16104629355966789597ULL;
unsigned short var_15 = (unsigned short)52297;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -629487973;
unsigned int var_19 = 4151623797U;
unsigned char var_20 = (unsigned char)40;
unsigned int var_21 = 3509433704U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
