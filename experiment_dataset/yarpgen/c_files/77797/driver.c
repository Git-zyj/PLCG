#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1828948778;
short var_1 = (short)-15938;
unsigned long long int var_2 = 17488138130532543776ULL;
int var_3 = -1530802881;
short var_4 = (short)-8573;
unsigned int var_5 = 2888745449U;
unsigned short var_6 = (unsigned short)2721;
short var_7 = (short)26290;
unsigned short var_9 = (unsigned short)3549;
int zero = 0;
unsigned short var_10 = (unsigned short)38913;
unsigned short var_11 = (unsigned short)4399;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
