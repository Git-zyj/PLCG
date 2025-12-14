#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1104084387;
unsigned int var_7 = 1677768782U;
unsigned short var_9 = (unsigned short)46917;
unsigned short var_11 = (unsigned short)32382;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 3260478845962807883LL;
unsigned short var_15 = (unsigned short)58695;
signed char var_16 = (signed char)-27;
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
