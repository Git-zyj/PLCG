#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2698652024U;
unsigned short var_1 = (unsigned short)919;
unsigned char var_2 = (unsigned char)14;
unsigned long long int var_6 = 9524938101043482054ULL;
signed char var_7 = (signed char)88;
short var_8 = (short)31830;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)0;
int var_12 = -574924464;
short var_13 = (short)-5761;
short var_14 = (short)27575;
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
