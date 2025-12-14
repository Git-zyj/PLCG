#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)139;
int var_4 = -55553134;
unsigned char var_7 = (unsigned char)80;
_Bool var_8 = (_Bool)0;
unsigned long long int var_15 = 5288297449371420903ULL;
unsigned char var_16 = (unsigned char)25;
_Bool var_17 = (_Bool)0;
int var_18 = -503276106;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = 105406733;
unsigned char var_21 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
