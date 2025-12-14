#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1860112370;
long long int var_3 = 9144991478696448285LL;
int var_5 = 1930189971;
long long int var_7 = 6688963855086114172LL;
unsigned char var_13 = (unsigned char)176;
int zero = 0;
long long int var_20 = -7215160591947758742LL;
unsigned long long int var_21 = 14656228655350699606ULL;
long long int var_22 = -3663039750563867251LL;
long long int var_23 = 8707450529677487350LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
