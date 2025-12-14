#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1397584518;
signed char var_6 = (signed char)99;
int var_7 = 1892188682;
unsigned char var_8 = (unsigned char)24;
short var_9 = (short)-3511;
unsigned short var_12 = (unsigned short)23502;
long long int var_13 = -8945642690739879582LL;
unsigned long long int var_14 = 3993504688415610109ULL;
unsigned int var_17 = 3404650723U;
int zero = 0;
long long int var_19 = 7853189405883735335LL;
long long int var_20 = 8176008234107193240LL;
long long int var_21 = -7370945136215139989LL;
long long int var_22 = -2802865444127390566LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
