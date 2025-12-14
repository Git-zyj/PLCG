#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_5 = 7304305286508712709ULL;
unsigned int var_6 = 2853058009U;
unsigned int var_8 = 3689179457U;
int var_10 = -1001893441;
unsigned char var_12 = (unsigned char)164;
long long int var_15 = -4876692624183389770LL;
long long int var_16 = -6439583395853221106LL;
int zero = 0;
long long int var_18 = 5390689700137279697LL;
unsigned long long int var_19 = 12758649718261030566ULL;
unsigned int var_20 = 2549274419U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
