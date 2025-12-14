#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8609109526028006569ULL;
_Bool var_2 = (_Bool)1;
_Bool var_10 = (_Bool)1;
long long int var_11 = 5446616135988175627LL;
unsigned char var_14 = (unsigned char)206;
_Bool var_15 = (_Bool)0;
long long int var_18 = -6669722935615404738LL;
unsigned long long int var_19 = 17018063561198769374ULL;
int zero = 0;
long long int var_20 = 4884338029360823398LL;
_Bool var_21 = (_Bool)1;
int var_22 = 1342513366;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-19347;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
