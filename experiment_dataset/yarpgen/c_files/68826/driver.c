#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4049094367U;
unsigned int var_2 = 3627364669U;
signed char var_3 = (signed char)-9;
long long int var_4 = 8744244813820727637LL;
long long int var_5 = 2536266720451284780LL;
int var_6 = 1902286980;
long long int var_13 = 1297734657744544902LL;
int zero = 0;
long long int var_14 = -2781096245706798377LL;
long long int var_15 = 5720958254793825642LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
