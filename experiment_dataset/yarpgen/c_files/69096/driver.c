#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)103;
unsigned int var_1 = 2241147009U;
short var_2 = (short)20303;
unsigned char var_6 = (unsigned char)68;
unsigned int var_7 = 503712094U;
int var_8 = 1743073982;
unsigned short var_13 = (unsigned short)39425;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 624780790U;
signed char var_16 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
