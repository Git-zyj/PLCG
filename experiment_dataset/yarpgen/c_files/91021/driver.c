#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)9255;
unsigned char var_6 = (unsigned char)69;
unsigned char var_9 = (unsigned char)183;
unsigned long long int var_10 = 7024525270100244516ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)29;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)75;
void init() {
}

void checksum() {
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
