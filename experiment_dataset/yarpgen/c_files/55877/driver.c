#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58029;
long long int var_1 = -5384064846464893752LL;
unsigned char var_3 = (unsigned char)17;
_Bool var_6 = (_Bool)0;
int var_8 = -289220733;
unsigned long long int var_13 = 11397677125034179498ULL;
signed char var_16 = (signed char)70;
int zero = 0;
unsigned long long int var_18 = 9930785488964858469ULL;
unsigned short var_19 = (unsigned short)3422;
unsigned int var_20 = 3944395729U;
signed char var_21 = (signed char)31;
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
