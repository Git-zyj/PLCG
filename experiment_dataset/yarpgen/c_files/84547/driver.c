#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)191;
signed char var_2 = (signed char)-52;
unsigned char var_4 = (unsigned char)33;
short var_5 = (short)7637;
_Bool var_6 = (_Bool)0;
short var_17 = (short)-30556;
int zero = 0;
unsigned int var_20 = 3751506004U;
unsigned int var_21 = 2619195471U;
unsigned short var_22 = (unsigned short)37890;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
