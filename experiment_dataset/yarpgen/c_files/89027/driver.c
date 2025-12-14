#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 209407030U;
long long int var_8 = -4948414163357711280LL;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 3209187094U;
int zero = 0;
unsigned long long int var_13 = 16153529906910139629ULL;
unsigned char var_14 = (unsigned char)37;
unsigned char var_15 = (unsigned char)11;
unsigned int var_16 = 843237113U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
