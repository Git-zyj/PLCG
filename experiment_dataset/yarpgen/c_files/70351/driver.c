#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6636526552847691558LL;
short var_1 = (short)-3469;
unsigned char var_3 = (unsigned char)15;
unsigned short var_5 = (unsigned short)62490;
long long int var_8 = -4016434285560314656LL;
long long int var_10 = 1873381970931311212LL;
int zero = 0;
unsigned short var_15 = (unsigned short)39503;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-25975;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
