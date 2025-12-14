#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1122608605;
signed char var_8 = (signed char)-25;
unsigned int var_13 = 643950797U;
unsigned short var_14 = (unsigned short)4671;
int zero = 0;
unsigned short var_15 = (unsigned short)10968;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)112;
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
