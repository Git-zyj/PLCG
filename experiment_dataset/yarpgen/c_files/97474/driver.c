#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-111;
unsigned int var_4 = 978509940U;
short var_6 = (short)-27469;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-410;
_Bool var_12 = (_Bool)0;
long long int var_13 = 4543403215028259490LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)7500;
short var_17 = (short)21100;
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
