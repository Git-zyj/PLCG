#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
_Bool var_3 = (_Bool)1;
int var_6 = -513084947;
unsigned char var_8 = (unsigned char)223;
signed char var_14 = (signed char)-71;
unsigned char var_15 = (unsigned char)132;
unsigned char var_16 = (unsigned char)128;
int zero = 0;
signed char var_17 = (signed char)-61;
unsigned char var_18 = (unsigned char)110;
signed char var_19 = (signed char)-114;
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
