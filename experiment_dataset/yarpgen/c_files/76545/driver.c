#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
unsigned char var_1 = (unsigned char)45;
unsigned int var_6 = 531135726U;
unsigned short var_7 = (unsigned short)60160;
unsigned int var_10 = 3064734959U;
short var_13 = (short)-18883;
int zero = 0;
unsigned int var_20 = 268406941U;
long long int var_21 = -708208230048428283LL;
unsigned short var_22 = (unsigned short)30876;
unsigned char var_23 = (unsigned char)220;
long long int var_24 = -3074727259632897170LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
