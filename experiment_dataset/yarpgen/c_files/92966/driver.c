#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4499667467708404242ULL;
short var_2 = (short)-23468;
unsigned int var_3 = 1989501444U;
short var_4 = (short)-22553;
unsigned long long int var_5 = 13809773194052630367ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)210;
signed char var_10 = (signed char)22;
int zero = 0;
signed char var_13 = (signed char)82;
unsigned short var_14 = (unsigned short)53908;
long long int var_15 = 4378323315829353995LL;
int var_16 = 54427307;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
