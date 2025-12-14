#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1910741851U;
unsigned short var_2 = (unsigned short)60977;
unsigned short var_6 = (unsigned short)18903;
int var_8 = -1440146040;
int zero = 0;
long long int var_10 = 8522045805271308298LL;
unsigned int var_11 = 1809463666U;
unsigned int var_12 = 1357913342U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
