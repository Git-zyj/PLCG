#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)27112;
_Bool var_3 = (_Bool)0;
signed char var_9 = (signed char)-108;
_Bool var_13 = (_Bool)0;
unsigned long long int var_17 = 10007220029157550601ULL;
int zero = 0;
unsigned int var_18 = 2574527037U;
unsigned int var_19 = 420010296U;
unsigned int var_20 = 2285619684U;
unsigned short var_21 = (unsigned short)31429;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
