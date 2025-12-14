#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)18;
_Bool var_4 = (_Bool)0;
unsigned long long int var_8 = 12207663991229649564ULL;
unsigned char var_10 = (unsigned char)18;
_Bool var_15 = (_Bool)1;
int var_16 = 1809365789;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 15713364770103025444ULL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
