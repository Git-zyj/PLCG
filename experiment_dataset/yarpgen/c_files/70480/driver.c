#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31016;
unsigned char var_16 = (unsigned char)117;
unsigned short var_17 = (unsigned short)39903;
int var_19 = -1041265977;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-2;
unsigned char var_22 = (unsigned char)116;
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
