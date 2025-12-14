#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
long long int var_1 = 380128629673093622LL;
short var_3 = (short)19415;
short var_8 = (short)-12115;
unsigned int var_9 = 3774573396U;
int zero = 0;
signed char var_11 = (signed char)0;
signed char var_12 = (signed char)-109;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
