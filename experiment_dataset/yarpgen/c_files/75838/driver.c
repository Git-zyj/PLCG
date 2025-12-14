#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 137477977U;
unsigned char var_3 = (unsigned char)105;
unsigned int var_10 = 4043646751U;
_Bool var_11 = (_Bool)0;
int var_12 = -1290336962;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 17423015649638526358ULL;
unsigned short var_18 = (unsigned short)49035;
unsigned short var_19 = (unsigned short)32467;
unsigned int var_20 = 2367922082U;
void init() {
}

void checksum() {
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
