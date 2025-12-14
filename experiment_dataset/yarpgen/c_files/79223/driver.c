#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1166474111U;
unsigned int var_4 = 1055096381U;
unsigned long long int var_6 = 16994578527896609013ULL;
signed char var_18 = (signed char)48;
signed char var_19 = (signed char)-87;
int zero = 0;
unsigned long long int var_20 = 11593107032741864406ULL;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)101;
void init() {
}

void checksum() {
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
