#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20648;
int var_3 = -738504087;
unsigned short var_6 = (unsigned short)30458;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_11 = 1431450829;
unsigned char var_12 = (unsigned char)20;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
