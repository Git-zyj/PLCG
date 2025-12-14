#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3127481872692835950LL;
unsigned short var_1 = (unsigned short)14623;
unsigned int var_2 = 762996828U;
int var_4 = -2004241674;
unsigned int var_5 = 2824391115U;
int var_6 = -79957925;
unsigned long long int var_8 = 720411123352997206ULL;
unsigned short var_9 = (unsigned short)19403;
int zero = 0;
long long int var_10 = -3678874433003511095LL;
_Bool var_11 = (_Bool)1;
int var_12 = 1831500245;
long long int var_13 = 4465008694308266381LL;
unsigned int var_14 = 1037615937U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
