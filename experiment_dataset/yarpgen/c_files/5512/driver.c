#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3356908432U;
unsigned char var_5 = (unsigned char)38;
signed char var_6 = (signed char)-47;
int zero = 0;
unsigned int var_10 = 2032826476U;
int var_11 = -1659079602;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-15464;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
