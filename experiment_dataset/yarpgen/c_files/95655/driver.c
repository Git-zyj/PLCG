#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
signed char var_8 = (signed char)107;
int var_11 = 1604342211;
_Bool var_13 = (_Bool)1;
unsigned short var_16 = (unsigned short)9484;
_Bool var_17 = (_Bool)1;
short var_19 = (short)15406;
int zero = 0;
int var_20 = 453215891;
signed char var_21 = (signed char)-25;
void init() {
}

void checksum() {
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
