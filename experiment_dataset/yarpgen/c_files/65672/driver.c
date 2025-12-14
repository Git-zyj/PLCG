#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
int var_7 = 304855479;
unsigned char var_10 = (unsigned char)73;
int zero = 0;
unsigned char var_12 = (unsigned char)118;
short var_13 = (short)-21789;
unsigned long long int var_14 = 6835300616422998543ULL;
void init() {
}

void checksum() {
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
