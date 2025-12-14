#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
short var_8 = (short)22757;
int var_14 = -2111426093;
unsigned int var_15 = 4226044253U;
unsigned long long int var_17 = 8559021459175043307ULL;
long long int var_18 = -5056370600435180764LL;
int zero = 0;
unsigned short var_20 = (unsigned short)39839;
unsigned long long int var_21 = 9533202685533006455ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
