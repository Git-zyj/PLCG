#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 980206701445935617ULL;
unsigned char var_7 = (unsigned char)74;
short var_9 = (short)-2997;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)211;
int zero = 0;
unsigned char var_15 = (unsigned char)122;
int var_16 = -1584077309;
void init() {
}

void checksum() {
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
