#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -826641254360851837LL;
unsigned long long int var_8 = 16809185953493831728ULL;
short var_10 = (short)23901;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)21;
unsigned int var_14 = 357854684U;
int zero = 0;
long long int var_17 = 6641372260153000998LL;
unsigned int var_18 = 691381544U;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)43867;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
