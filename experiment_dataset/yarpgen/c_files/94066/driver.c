#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4788268799736669346LL;
signed char var_4 = (signed char)103;
unsigned int var_9 = 2702253091U;
int zero = 0;
unsigned short var_17 = (unsigned short)25152;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3558391105U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
