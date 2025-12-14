#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1740980392;
unsigned long long int var_3 = 11926927716164216339ULL;
long long int var_4 = -2676803119249523956LL;
unsigned int var_8 = 4014194162U;
long long int var_11 = 7859994835015260531LL;
unsigned long long int var_14 = 17881095264862708546ULL;
int zero = 0;
long long int var_19 = 3136315844392880885LL;
unsigned int var_20 = 4275405424U;
unsigned short var_21 = (unsigned short)40884;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 2647325157U;
long long int var_24 = -2225226174910876570LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
