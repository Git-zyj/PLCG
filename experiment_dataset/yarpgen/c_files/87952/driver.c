#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3951693063U;
unsigned long long int var_2 = 16601968855642398414ULL;
long long int var_3 = -2454211793255980476LL;
short var_4 = (short)6633;
unsigned short var_5 = (unsigned short)56145;
unsigned int var_6 = 617587970U;
int var_10 = -440659030;
int zero = 0;
unsigned long long int var_11 = 7460429347003548229ULL;
unsigned long long int var_12 = 16266387415843067945ULL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)93;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
