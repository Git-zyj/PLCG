#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1572964508;
_Bool var_4 = (_Bool)1;
int zero = 0;
short var_11 = (short)5323;
int var_12 = 920619864;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)206;
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
