#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3154539811975065204LL;
unsigned int var_6 = 941803764U;
unsigned short var_7 = (unsigned short)23490;
signed char var_10 = (signed char)-78;
_Bool var_14 = (_Bool)0;
int var_18 = 1162909935;
int zero = 0;
short var_19 = (short)-15851;
long long int var_20 = 7313473357225550462LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
