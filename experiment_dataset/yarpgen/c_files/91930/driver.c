#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
_Bool var_6 = (_Bool)0;
int var_7 = 1731554006;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 4166802271U;
unsigned char var_13 = (unsigned char)222;
signed char var_14 = (signed char)100;
int zero = 0;
unsigned short var_17 = (unsigned short)29778;
unsigned char var_18 = (unsigned char)130;
int var_19 = 805169384;
void init() {
}

void checksum() {
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
