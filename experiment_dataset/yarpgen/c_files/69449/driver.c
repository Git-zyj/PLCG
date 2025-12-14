#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7325251882021587880ULL;
unsigned int var_11 = 3946080884U;
unsigned short var_12 = (unsigned short)43102;
int var_17 = 994108386;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-16470;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-32160;
unsigned long long int var_23 = 2502689076848283173ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
