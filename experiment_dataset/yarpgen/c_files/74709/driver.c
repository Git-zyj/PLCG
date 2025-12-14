#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42859;
unsigned short var_2 = (unsigned short)19499;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 2542619746U;
int var_9 = 502303391;
int zero = 0;
unsigned long long int var_10 = 8828117200498621284ULL;
int var_11 = 235005943;
unsigned short var_12 = (unsigned short)49994;
unsigned short var_13 = (unsigned short)10940;
signed char var_14 = (signed char)-9;
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
