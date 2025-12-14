#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3461518457U;
_Bool var_2 = (_Bool)0;
unsigned short var_8 = (unsigned short)20781;
int zero = 0;
long long int var_15 = 1386146464075746092LL;
unsigned short var_16 = (unsigned short)11664;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
