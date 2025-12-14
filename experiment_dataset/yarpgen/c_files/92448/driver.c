#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48598;
int var_6 = 1563525464;
long long int var_7 = -4411576998260294165LL;
unsigned char var_8 = (unsigned char)176;
unsigned int var_9 = 1377315239U;
unsigned char var_10 = (unsigned char)86;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = -1784119353969120922LL;
unsigned short var_14 = (unsigned short)5859;
int var_15 = 1521104890;
void init() {
}

void checksum() {
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
