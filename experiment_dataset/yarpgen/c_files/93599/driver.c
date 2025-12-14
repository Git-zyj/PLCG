#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 231914895;
signed char var_3 = (signed char)-117;
unsigned short var_4 = (unsigned short)19119;
int var_5 = -869339227;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-27;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)37;
_Bool var_17 = (_Bool)0;
short var_18 = (short)13720;
unsigned short var_19 = (unsigned short)47520;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
