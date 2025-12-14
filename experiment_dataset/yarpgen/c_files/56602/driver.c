#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -835416710;
long long int var_4 = 3852808734335294370LL;
int var_6 = -1297331219;
long long int var_8 = -3940455141091197424LL;
_Bool var_10 = (_Bool)1;
int var_12 = -638707577;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_16 = -2039684942;
long long int var_17 = 565461315011604545LL;
long long int var_18 = -3521925895326562151LL;
void init() {
}

void checksum() {
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
