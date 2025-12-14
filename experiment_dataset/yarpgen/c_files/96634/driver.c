#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
int var_1 = 2070389489;
unsigned short var_2 = (unsigned short)15356;
long long int var_3 = -5158564419780926216LL;
unsigned short var_6 = (unsigned short)50243;
int var_7 = 1203878131;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_11 = 1922530160104681670LL;
unsigned char var_12 = (unsigned char)68;
unsigned long long int var_13 = 11590190268595729936ULL;
unsigned short var_14 = (unsigned short)11368;
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
