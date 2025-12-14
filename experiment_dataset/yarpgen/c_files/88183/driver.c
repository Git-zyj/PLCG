#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1541010634721821194LL;
unsigned short var_4 = (unsigned short)25723;
unsigned short var_8 = (unsigned short)40610;
int zero = 0;
unsigned short var_10 = (unsigned short)22650;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2887357267U;
long long int var_14 = -5256200773286080994LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
