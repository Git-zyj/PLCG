#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-108;
unsigned short var_10 = (unsigned short)29094;
short var_11 = (short)7213;
signed char var_13 = (signed char)-108;
short var_16 = (short)-30277;
int zero = 0;
int var_18 = -929738795;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2315663821U;
long long int var_21 = 3433013380873622687LL;
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
