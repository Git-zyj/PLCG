#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4192291977U;
unsigned short var_1 = (unsigned short)46850;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 297249091U;
short var_7 = (short)214;
short var_9 = (short)10898;
int zero = 0;
unsigned int var_11 = 3744984714U;
unsigned short var_12 = (unsigned short)56026;
unsigned short var_13 = (unsigned short)2812;
void init() {
}

void checksum() {
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
