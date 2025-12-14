#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1563296327U;
unsigned short var_4 = (unsigned short)25274;
signed char var_5 = (signed char)105;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)46347;
unsigned short var_9 = (unsigned short)17398;
_Bool var_14 = (_Bool)1;
int var_15 = 2002444472;
long long int var_16 = 5247503910008575884LL;
unsigned int var_17 = 1074624300U;
int zero = 0;
unsigned char var_20 = (unsigned char)254;
int var_21 = -1947513425;
_Bool var_22 = (_Bool)1;
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
