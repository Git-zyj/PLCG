#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 135561791;
unsigned short var_2 = (unsigned short)40388;
long long int var_8 = -168312623570653651LL;
long long int var_9 = -8066256504674099833LL;
short var_10 = (short)-16937;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_20 = 2252113177313169366LL;
signed char var_21 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
