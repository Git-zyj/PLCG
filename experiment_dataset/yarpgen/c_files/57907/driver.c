#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)34739;
unsigned short var_13 = (unsigned short)63240;
signed char var_14 = (signed char)-105;
long long int var_17 = -5110674679635741600LL;
unsigned int var_18 = 2321518561U;
int zero = 0;
signed char var_19 = (signed char)-98;
signed char var_20 = (signed char)25;
unsigned short var_21 = (unsigned short)44843;
unsigned int var_22 = 642405847U;
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
