#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-16921;
unsigned short var_4 = (unsigned short)6736;
unsigned int var_10 = 2225214779U;
signed char var_15 = (signed char)112;
int zero = 0;
unsigned short var_16 = (unsigned short)2875;
short var_17 = (short)-27553;
long long int var_18 = -4122516928612627623LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
