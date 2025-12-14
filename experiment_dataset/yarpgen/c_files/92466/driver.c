#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31256;
unsigned long long int var_4 = 4504457832819054411ULL;
unsigned long long int var_5 = 16309699565105127173ULL;
unsigned short var_6 = (unsigned short)38651;
unsigned long long int var_7 = 5847086649862888186ULL;
unsigned int var_8 = 4184457476U;
long long int var_9 = -379775167031948457LL;
int zero = 0;
long long int var_10 = 8870751983184645178LL;
long long int var_11 = 8820532706011878663LL;
long long int var_12 = 2790698123735743082LL;
unsigned long long int var_13 = 16167457595471689711ULL;
_Bool var_14 = (_Bool)0;
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
