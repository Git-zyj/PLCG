#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2870542932U;
_Bool var_6 = (_Bool)0;
unsigned long long int var_16 = 9829087272627867191ULL;
long long int var_19 = 4950907551057775237LL;
int zero = 0;
unsigned char var_20 = (unsigned char)255;
unsigned int var_21 = 863264749U;
int var_22 = 1594326832;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
