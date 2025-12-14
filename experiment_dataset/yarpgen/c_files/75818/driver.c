#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-28;
unsigned short var_5 = (unsigned short)53060;
_Bool var_9 = (_Bool)1;
short var_10 = (short)24474;
int zero = 0;
unsigned short var_11 = (unsigned short)27456;
signed char var_12 = (signed char)15;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)12393;
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
