#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)41;
short var_5 = (short)30375;
unsigned int var_6 = 1052462244U;
int var_7 = -645077968;
unsigned long long int var_8 = 11432553916116045493ULL;
int var_9 = -1105771423;
signed char var_11 = (signed char)-93;
unsigned char var_12 = (unsigned char)128;
unsigned long long int var_13 = 8987508759211385535ULL;
unsigned long long int var_15 = 4379456159741842464ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)50;
unsigned int var_17 = 3017253406U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
