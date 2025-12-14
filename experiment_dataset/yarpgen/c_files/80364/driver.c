#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)8068;
unsigned char var_2 = (unsigned char)150;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)53023;
unsigned short var_9 = (unsigned short)19655;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)42;
unsigned long long int var_13 = 13603580004744764151ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
