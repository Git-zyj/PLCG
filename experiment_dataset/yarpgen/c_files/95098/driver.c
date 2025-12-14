#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
int var_1 = 2130077652;
int var_6 = -1603121925;
int var_7 = 967755274;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)29595;
long long int var_12 = -7642100572902645288LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)74;
unsigned char var_18 = (unsigned char)189;
void init() {
}

void checksum() {
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
