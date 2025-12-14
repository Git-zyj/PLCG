#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
int var_19 = -939720771;
unsigned short var_20 = (unsigned short)59028;
unsigned short var_21 = (unsigned short)45497;
int var_22 = 1928380791;
int var_23 = -954354953;
signed char var_24 = (signed char)59;
unsigned char var_25 = (unsigned char)80;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 2134890078U;
unsigned long long int var_28 = 4341447078744710154ULL;
unsigned char var_29 = (unsigned char)92;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
