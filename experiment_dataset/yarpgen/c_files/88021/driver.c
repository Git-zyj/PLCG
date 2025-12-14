#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1357024762953607456LL;
unsigned char var_3 = (unsigned char)139;
unsigned long long int var_4 = 12447323162370347158ULL;
_Bool var_5 = (_Bool)1;
long long int var_7 = 4039863334562784671LL;
unsigned long long int var_9 = 15860920745815823768ULL;
int zero = 0;
long long int var_10 = 1232716631165512604LL;
long long int var_11 = 3272515618985215076LL;
unsigned int var_12 = 897454822U;
unsigned int var_13 = 3803947016U;
unsigned int var_14 = 1370215323U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
