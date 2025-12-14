#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26729;
unsigned int var_2 = 314505447U;
signed char var_3 = (signed char)18;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)59;
unsigned short var_12 = (unsigned short)48853;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)61514;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
