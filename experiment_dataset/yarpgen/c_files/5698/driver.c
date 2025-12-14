#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 530902796261860901ULL;
unsigned short var_4 = (unsigned short)19720;
int var_5 = 643924762;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)49;
int zero = 0;
long long int var_10 = 4897304850173287644LL;
long long int var_11 = -1409491990512703832LL;
unsigned long long int var_12 = 9792748032977138943ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
