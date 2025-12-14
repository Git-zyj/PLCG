#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8848;
unsigned char var_5 = (unsigned char)34;
signed char var_6 = (signed char)67;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-32;
short var_9 = (short)-14064;
unsigned char var_11 = (unsigned char)75;
int zero = 0;
unsigned int var_13 = 1403797308U;
signed char var_14 = (signed char)89;
void init() {
}

void checksum() {
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
