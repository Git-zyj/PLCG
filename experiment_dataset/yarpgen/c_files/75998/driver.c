#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34500;
long long int var_1 = -8937946103751466034LL;
_Bool var_2 = (_Bool)1;
int var_3 = -511486196;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 13789395005488256098ULL;
unsigned short var_7 = (unsigned short)31009;
long long int var_8 = -7414258812057317199LL;
unsigned short var_9 = (unsigned short)48873;
unsigned short var_10 = (unsigned short)19240;
unsigned short var_12 = (unsigned short)17228;
long long int var_13 = -5152524653892776616LL;
long long int var_14 = 1971260666925084049LL;
int zero = 0;
unsigned short var_16 = (unsigned short)61115;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)49368;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
