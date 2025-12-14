#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2904114065U;
unsigned short var_3 = (unsigned short)8353;
_Bool var_6 = (_Bool)0;
unsigned short var_11 = (unsigned short)29622;
unsigned int var_13 = 3660014409U;
unsigned int var_14 = 4292132185U;
_Bool var_17 = (_Bool)1;
unsigned char var_19 = (unsigned char)45;
int zero = 0;
unsigned short var_20 = (unsigned short)23490;
long long int var_21 = -3775821726593574843LL;
unsigned int var_22 = 3590209119U;
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
