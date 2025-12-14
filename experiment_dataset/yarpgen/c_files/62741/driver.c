#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)24;
unsigned char var_3 = (unsigned char)32;
unsigned int var_5 = 3686611192U;
signed char var_6 = (signed char)-27;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 251379230300663812ULL;
short var_10 = (short)-6394;
int zero = 0;
unsigned int var_11 = 667902215U;
unsigned char var_12 = (unsigned char)122;
unsigned char var_13 = (unsigned char)15;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
