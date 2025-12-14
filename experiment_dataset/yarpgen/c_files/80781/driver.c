#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2948827626632117267LL;
short var_3 = (short)-6531;
long long int var_8 = -5405489025707188251LL;
int var_11 = -140156153;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 1816923326U;
unsigned long long int var_18 = 12320714118506485115ULL;
long long int var_19 = -6791690003159060228LL;
long long int var_20 = -389076067166933921LL;
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
