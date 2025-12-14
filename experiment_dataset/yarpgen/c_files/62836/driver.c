#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1264158576161242374LL;
unsigned long long int var_6 = 16389026350667236107ULL;
signed char var_10 = (signed char)-40;
short var_17 = (short)6406;
int zero = 0;
unsigned char var_20 = (unsigned char)150;
short var_21 = (short)-13370;
unsigned char var_22 = (unsigned char)125;
long long int var_23 = 7124344452289935753LL;
unsigned char var_24 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
