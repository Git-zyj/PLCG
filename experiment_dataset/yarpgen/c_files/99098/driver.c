#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_3 = (unsigned char)165;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned long long int var_12 = 2792191292869250416ULL;
int zero = 0;
unsigned long long int var_19 = 15847277225827413181ULL;
unsigned long long int var_20 = 17926698552719277464ULL;
_Bool var_21 = (_Bool)1;
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
