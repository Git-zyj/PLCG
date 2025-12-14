#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1712958048;
_Bool var_1 = (_Bool)1;
int var_2 = -1477384301;
long long int var_4 = -8691852844904350905LL;
unsigned long long int var_7 = 11827407901095724694ULL;
unsigned int var_12 = 1319631572U;
signed char var_16 = (signed char)26;
int var_17 = 1978312880;
unsigned long long int var_18 = 6587781898016685697ULL;
int zero = 0;
unsigned int var_19 = 570867447U;
unsigned int var_20 = 25534449U;
long long int var_21 = 968037362016367088LL;
unsigned long long int var_22 = 17038217842496602444ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
