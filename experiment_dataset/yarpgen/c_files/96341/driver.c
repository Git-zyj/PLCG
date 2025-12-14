#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-1289;
_Bool var_9 = (_Bool)0;
unsigned char var_16 = (unsigned char)203;
unsigned int var_17 = 3008630284U;
int zero = 0;
signed char var_18 = (signed char)115;
unsigned short var_19 = (unsigned short)53628;
void init() {
}

void checksum() {
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
