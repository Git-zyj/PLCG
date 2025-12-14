#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5341690793455750753LL;
unsigned int var_3 = 890956745U;
long long int var_5 = -2328214466358769901LL;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)34;
int var_16 = -1175857478;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
