#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)12312;
unsigned long long int var_5 = 1596046018117535810ULL;
signed char var_6 = (signed char)66;
unsigned short var_8 = (unsigned short)40612;
int zero = 0;
unsigned int var_11 = 1820855996U;
unsigned short var_12 = (unsigned short)21129;
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
