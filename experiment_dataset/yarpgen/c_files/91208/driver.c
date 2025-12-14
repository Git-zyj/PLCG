#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17049351843036129268ULL;
unsigned char var_2 = (unsigned char)5;
signed char var_4 = (signed char)-61;
signed char var_6 = (signed char)-97;
unsigned long long int var_7 = 4418977060932903864ULL;
_Bool var_10 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 16807165150474448880ULL;
signed char var_17 = (signed char)96;
unsigned long long int var_18 = 11946912002736573375ULL;
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
