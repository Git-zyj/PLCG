#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3883847010U;
unsigned char var_2 = (unsigned char)240;
long long int var_5 = 6592993213670783928LL;
signed char var_8 = (signed char)5;
unsigned long long int var_9 = 1822819789844512092ULL;
unsigned long long int var_12 = 11608270960486809287ULL;
short var_15 = (short)-9046;
int zero = 0;
unsigned long long int var_17 = 4769413606781298363ULL;
unsigned long long int var_18 = 13784705151864813764ULL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
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
