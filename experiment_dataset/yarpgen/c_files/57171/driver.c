#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)207;
unsigned char var_1 = (unsigned char)191;
_Bool var_3 = (_Bool)1;
int var_4 = 790430249;
_Bool var_5 = (_Bool)0;
long long int var_8 = 2909319207437095388LL;
int var_9 = -665365003;
int var_10 = -947081392;
int var_11 = -251778758;
int var_12 = 892310944;
int var_13 = -1063555859;
unsigned long long int var_14 = 8290135014187880494ULL;
short var_15 = (short)-21963;
int zero = 0;
int var_16 = -968717525;
int var_17 = 1886096962;
_Bool var_18 = (_Bool)0;
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
