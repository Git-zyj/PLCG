#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)29;
unsigned int var_4 = 3218138942U;
unsigned short var_8 = (unsigned short)50138;
unsigned short var_12 = (unsigned short)62556;
unsigned int var_13 = 707046648U;
unsigned long long int var_17 = 15807386612815924761ULL;
int zero = 0;
signed char var_19 = (signed char)82;
short var_20 = (short)5881;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
