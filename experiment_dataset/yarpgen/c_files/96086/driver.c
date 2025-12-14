#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36623;
unsigned long long int var_6 = 13665918985821158652ULL;
long long int var_7 = 3345446744132089118LL;
unsigned int var_8 = 2869000253U;
int var_10 = -80356348;
int var_13 = -1377286029;
unsigned char var_15 = (unsigned char)242;
int zero = 0;
int var_18 = 1165507454;
long long int var_19 = -2610612919999112315LL;
unsigned long long int var_20 = 1258532422796625521ULL;
void init() {
}

void checksum() {
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
