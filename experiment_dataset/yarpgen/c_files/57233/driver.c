#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55401;
long long int var_9 = 2354238029339607944LL;
unsigned int var_11 = 1573005659U;
unsigned long long int var_13 = 10301062628580962682ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 1853284892U;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 10711673780496974239ULL;
unsigned int var_21 = 3408101087U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
