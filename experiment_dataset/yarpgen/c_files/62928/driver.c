#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24947;
unsigned long long int var_6 = 8988892259824638600ULL;
unsigned long long int var_8 = 3733834696967289553ULL;
long long int var_15 = -5502640992633128491LL;
int zero = 0;
unsigned char var_19 = (unsigned char)241;
long long int var_20 = -3176133227442603869LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
