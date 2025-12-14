#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64442;
unsigned short var_8 = (unsigned short)25754;
unsigned int var_12 = 3714115221U;
unsigned short var_13 = (unsigned short)50348;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2412524362U;
short var_16 = (short)23309;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
