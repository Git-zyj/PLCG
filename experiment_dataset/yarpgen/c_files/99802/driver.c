#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)25092;
unsigned int var_4 = 4230079054U;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1358500514U;
int var_10 = 739144594;
int var_12 = 2081963928;
unsigned char var_14 = (unsigned char)225;
int zero = 0;
unsigned char var_16 = (unsigned char)178;
long long int var_17 = 2421633561969933873LL;
unsigned char var_18 = (unsigned char)20;
int var_19 = 849159267;
unsigned char var_20 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
