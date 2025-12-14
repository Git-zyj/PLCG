#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1482672780923171151LL;
long long int var_2 = -5174020525292834106LL;
_Bool var_3 = (_Bool)1;
int var_5 = -116699973;
signed char var_7 = (signed char)45;
unsigned short var_8 = (unsigned short)53305;
signed char var_11 = (signed char)-49;
unsigned long long int var_13 = 5688117331305746136ULL;
signed char var_15 = (signed char)-102;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -2100141516;
unsigned char var_18 = (unsigned char)4;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
