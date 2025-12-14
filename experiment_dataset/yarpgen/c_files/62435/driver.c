#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -792054307916710542LL;
unsigned short var_3 = (unsigned short)46868;
unsigned short var_5 = (unsigned short)27938;
unsigned short var_7 = (unsigned short)590;
unsigned short var_8 = (unsigned short)17000;
_Bool var_15 = (_Bool)0;
unsigned short var_17 = (unsigned short)46211;
int zero = 0;
long long int var_20 = -3631906782257185713LL;
long long int var_21 = -6739490574432071241LL;
void init() {
}

void checksum() {
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
