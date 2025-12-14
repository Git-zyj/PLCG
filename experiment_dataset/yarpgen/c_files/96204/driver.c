#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3555290199U;
unsigned int var_7 = 3540578460U;
unsigned long long int var_9 = 10607306169654665130ULL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2841621454U;
int zero = 0;
unsigned char var_17 = (unsigned char)251;
unsigned long long int var_18 = 16041244374962594276ULL;
signed char var_19 = (signed char)12;
unsigned short var_20 = (unsigned short)59651;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
