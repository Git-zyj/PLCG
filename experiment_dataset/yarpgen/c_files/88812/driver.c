#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8405;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 7507555670889008205ULL;
long long int var_7 = -1371396732223718155LL;
long long int var_14 = 3385733511634151837LL;
int zero = 0;
unsigned char var_18 = (unsigned char)212;
long long int var_19 = 919252199693859959LL;
void init() {
}

void checksum() {
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
