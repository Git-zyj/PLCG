#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-98;
unsigned short var_3 = (unsigned short)6884;
short var_4 = (short)-280;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)52;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3308562680U;
unsigned int var_13 = 654891082U;
unsigned int var_14 = 2593075757U;
int zero = 0;
signed char var_15 = (signed char)34;
short var_16 = (short)-12988;
unsigned short var_17 = (unsigned short)49071;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
