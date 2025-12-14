#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49442;
int var_2 = -465535725;
short var_3 = (short)-12965;
unsigned char var_4 = (unsigned char)67;
unsigned int var_5 = 3027627016U;
_Bool var_6 = (_Bool)1;
int var_10 = 396719606;
short var_13 = (short)18663;
unsigned int var_14 = 2375236916U;
unsigned int var_15 = 2357420762U;
int zero = 0;
unsigned int var_18 = 4081918380U;
unsigned int var_19 = 422351385U;
int var_20 = -283079766;
void init() {
}

void checksum() {
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
