#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19138;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)13;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)21;
int var_13 = 1958761195;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2413905767U;
unsigned int var_17 = 2494425965U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
