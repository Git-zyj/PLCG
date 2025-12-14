#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)15776;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-22065;
unsigned int var_12 = 2117608899U;
unsigned int var_15 = 3069194742U;
unsigned int var_16 = 3454716398U;
unsigned int var_17 = 2127086668U;
int zero = 0;
int var_18 = 823099360;
long long int var_19 = -5486643188445418146LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
