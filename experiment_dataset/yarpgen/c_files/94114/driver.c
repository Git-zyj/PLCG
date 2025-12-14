#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3829277343U;
long long int var_2 = -3920466477068280661LL;
unsigned int var_3 = 1130272742U;
unsigned char var_4 = (unsigned char)126;
unsigned long long int var_5 = 13369268783808020242ULL;
signed char var_6 = (signed char)-101;
unsigned int var_7 = 1411107694U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)242;
unsigned int var_12 = 305444575U;
short var_13 = (short)-8495;
long long int var_14 = -4941122052935867681LL;
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
