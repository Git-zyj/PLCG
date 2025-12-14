#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)13200;
signed char var_8 = (signed char)-122;
unsigned char var_11 = (unsigned char)40;
int zero = 0;
unsigned long long int var_13 = 2092336293874242188ULL;
int var_14 = 914407356;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
