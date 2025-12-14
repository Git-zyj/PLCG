#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = 4374291419717094570LL;
unsigned short var_5 = (unsigned short)50387;
unsigned char var_10 = (unsigned char)147;
int zero = 0;
unsigned short var_17 = (unsigned short)43295;
int var_18 = -71545749;
unsigned short var_19 = (unsigned short)58869;
long long int var_20 = 7328590019139955352LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
