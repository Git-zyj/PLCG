#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1650009131;
_Bool var_6 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_18 = -2887207744745163048LL;
unsigned int var_19 = 3629300922U;
unsigned int var_20 = 1483343124U;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
short var_23 = (short)20259;
_Bool var_24 = (_Bool)1;
unsigned int var_25 = 3646389309U;
short var_26 = (short)4506;
long long int var_27 = 4153255258369169866LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
