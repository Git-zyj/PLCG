#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)73;
unsigned char var_4 = (unsigned char)194;
unsigned long long int var_8 = 3365048758285650795ULL;
unsigned int var_13 = 2000862002U;
int zero = 0;
unsigned char var_19 = (unsigned char)81;
unsigned int var_20 = 3580291875U;
unsigned short var_21 = (unsigned short)63476;
_Bool var_22 = (_Bool)1;
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
