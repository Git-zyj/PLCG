#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -378197309;
unsigned int var_1 = 1740365220U;
signed char var_3 = (signed char)58;
unsigned char var_7 = (unsigned char)249;
int var_8 = 2084584569;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 1933794031;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
