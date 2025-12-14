#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7561867936204075513LL;
long long int var_5 = -7301791893438546315LL;
unsigned char var_9 = (unsigned char)48;
int var_13 = 83241052;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)2690;
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
