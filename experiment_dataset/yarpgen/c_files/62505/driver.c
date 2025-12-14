#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35729;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 238739648423863594ULL;
long long int var_4 = -2141318284812386043LL;
short var_5 = (short)29511;
signed char var_6 = (signed char)104;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2139731759U;
unsigned char var_12 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
