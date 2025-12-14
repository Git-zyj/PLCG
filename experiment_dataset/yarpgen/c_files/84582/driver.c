#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
int var_2 = 1238832885;
unsigned int var_10 = 929836976U;
short var_13 = (short)-29117;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)214;
unsigned char var_20 = (unsigned char)41;
signed char var_21 = (signed char)-115;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
