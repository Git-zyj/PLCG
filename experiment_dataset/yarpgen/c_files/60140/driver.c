#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4984370269219640716LL;
unsigned char var_4 = (unsigned char)170;
unsigned char var_6 = (unsigned char)247;
signed char var_7 = (signed char)-5;
long long int var_9 = 5673926606560864149LL;
unsigned long long int var_13 = 5515181849154562668ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 11652718790188746300ULL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)3562;
unsigned int var_18 = 2766289193U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
