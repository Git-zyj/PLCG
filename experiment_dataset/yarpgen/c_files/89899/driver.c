#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_6 = 967732308;
unsigned short var_7 = (unsigned short)56151;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)176;
int zero = 0;
unsigned int var_12 = 3381918766U;
_Bool var_13 = (_Bool)1;
int var_14 = 675228682;
long long int var_15 = 4561850505917606035LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
