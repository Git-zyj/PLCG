#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)60563;
unsigned short var_5 = (unsigned short)8290;
unsigned short var_6 = (unsigned short)64587;
unsigned short var_7 = (unsigned short)8517;
unsigned short var_14 = (unsigned short)55261;
int zero = 0;
unsigned short var_19 = (unsigned short)25700;
unsigned short var_20 = (unsigned short)35595;
unsigned short var_21 = (unsigned short)8174;
unsigned short var_22 = (unsigned short)58003;
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
