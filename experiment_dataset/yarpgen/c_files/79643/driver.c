#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)172;
unsigned short var_1 = (unsigned short)45309;
unsigned short var_2 = (unsigned short)42113;
unsigned int var_3 = 628858398U;
long long int var_4 = -4192153007270546640LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 7282465202582127579ULL;
unsigned long long int var_7 = 8210669139878445388ULL;
int var_8 = 2106102835;
signed char var_9 = (signed char)-53;
int zero = 0;
unsigned long long int var_10 = 14491016869713850750ULL;
long long int var_11 = 6590969039460219600LL;
signed char var_12 = (signed char)45;
signed char var_13 = (signed char)84;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
