#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 79692701U;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 16351068U;
unsigned long long int var_9 = 17467928194771819937ULL;
unsigned short var_11 = (unsigned short)14664;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-32743;
unsigned long long int var_15 = 2139237592819242147ULL;
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
