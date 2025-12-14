#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)54;
unsigned int var_1 = 338352484U;
unsigned short var_2 = (unsigned short)5290;
short var_4 = (short)14964;
signed char var_7 = (signed char)-127;
signed char var_9 = (signed char)-85;
_Bool var_10 = (_Bool)1;
unsigned int var_14 = 1353248162U;
unsigned long long int var_15 = 7551109188856402885ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)28;
unsigned long long int var_17 = 338721742733754225ULL;
short var_18 = (short)-7971;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
